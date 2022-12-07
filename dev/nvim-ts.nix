{ pkgs ? import <nixpkgs> { } }:

let
  d2-vim = pkgs.vimUtils.buildVimPluginFrom2Nix {
    name = "d2-vim";
    src = pkgs.fetchFromGitHub {
      owner = "terrastruct";
      repo = "d2-vim";
      rev = "ac58c07ba192d215cbbd2b2207f9def808a9283d";
      hash = "sha256-rXUhXVmva4K0PqUboSXUpTqNttwehjkjjsEgTCZbGKI=";
    };
  };

  neovim = pkgs.neovim.override {
    configure = {
      customRC = ''
        source ${./vimrc.vim}
      '';

      packages.myPlugins.start = with pkgs.vimPlugins; [
        d2-vim
        nvim-treesitter
      ];
    };
  };

in
pkgs.runCommand "nvim-ts" { } ''
  mkdir -p $out/bin
  ln -s ${neovim}/bin/nvim $out/bin/nvim-ts
''
