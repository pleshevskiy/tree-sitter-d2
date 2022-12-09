;-------------------------------------------------------------------------------

(container_key) @constant
(shape_key) @variable
(attr_key) @property
(reserved) @error

; Literals
;-------------------------------------------------------------------------------

(language) @string.special
(container_key (string) @string.special)
(shape_key (string) @string)
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
