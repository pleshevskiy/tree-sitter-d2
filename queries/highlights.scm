;-------------------------------------------------------------------------------

(container_key) @constant
(shape_key) @variable
(attr_key) @property
(reserved) @error

; Literals
;-------------------------------------------------------------------------------

(language) @type.qualifier
(container_key (string) @string)
(shape_key (string) @string)
(label) @string.special
(attr_value) @string
(integer) @number
(float) @float
(boolean) @boolean

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
  "|"
  "|`"
  "`|"
] @punctuation.bracket

; Special
;-------------------------------------------------------------------------------

(ERROR) @error
