; Special (treesitter don't overwrite)
;-------------------------------------------------------------------------------

(ERROR) @error
(invalid (_) @error)
;-------------------------------------------------------------------------------

(identifier) @variable
(attr_key) @keyword

; Literals
;-------------------------------------------------------------------------------

(string) @string
(label) @string
(attr_value) @string

; Comments
;-------------------------------------------------------------------------------

(line_comment) @comment.line

; Punctiation
;-------------------------------------------------------------------------------

(arrow) @operator

[
  (dot)
  ":"
  ";"
] @punctuation.delimiter

[
  "{"
  "}"
] @punctuation.bracket

; Special (nvim-treesitter overwrite previous rules)
;-------------------------------------------------------------------------------

(ERROR) @error
(invalid (_) @error)
