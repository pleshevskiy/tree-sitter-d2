; Special (treesitter don't overwrite)
;-------------------------------------------------------------------------------

(ERROR) @error
(invalid (_) @error)
;-------------------------------------------------------------------------------

(container_key) @constant
(shape_key) @variable
(attr_key) @property

; Literals
;-------------------------------------------------------------------------------

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
(invalid (_) @error)
