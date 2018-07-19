# Data Types and Expressions

1. data
  - int
  - float
  - double
  - char
  - string
  - bool
2. expressions
  - i/o expression
  - arithmetic expressions
3. control flow
  - sequential

## data type: integer numbers

### inner representation
- integers can be different sizes
- or they can each be fixed amount of bytes for representation
- each int uses 4 bytes (32 bits) in C++

for int `x`, 4 bytes; `y` 4 bytes => 100 to 104 to 108

- 32 bits is large (around 4 bil different numbers)
- represented in 32-bit 2's complement (in C++)
- C++ int literal
  - forms of data is either constant or variable (can change)
  - every data has a data of its own because C++ is _strongly typed_
  - C++ literals: 6, -6, 7.3, "abc", etc
- can use **arithmetic operators** include `+`, `-`, `%`, `=`, etc

### float and double
- used to store _real numbers_, in that they are numbers that can have fractional parts
- also have a fixed size
  - double is 8 bytes
  - float is 4 bytes (32 bits)
- with `int x = 6` is 4 bytes, `double y = 7.68`  8 bytes
  - floating is represented by [floating point method](https://en.wikipedia.org/wiki/IEEE_754)
- for _double_: use decimal representation of written numbers
- for _float_: 3.4f, -8.975f, etc.
  - use f at end to tell compiler it is a float
- arithmetic operators will do real division too and assignment as int

### type cast
- can't give a different type to a variable with already a type
  - need to figure out how to type cast, how to convert the value?
  - `double 6` becomes `int 6`
  - `y2 = (double)6;`
  - converted from one to another with casting
  - `x2 = (int)6.7` syntax is the same, but don't keep the converted value because integers can't represent, and it will floor the float to `int 6`

### expressions with mixed types
- divide `5.0 / 2`? compiler will resolve mixed types and try to make casting of arguments to state where operands will be of same type
  - try to use _implicit cast_ so as not to use accuracy
  - output would print `2.5`
- assignment expression has 2 steps when trying to assign to `double` (with `int/int`)
  - first evaluate right hand side
  - then assign to type `double`
  - compiler would resolve for and answer would be `double 2`

### chars
- used to represent data as characters
  - `'a'` represent text information with binary, therefore a number maps to letter
  - the same goes for symbols, etc
- each _char_ uses 1 byte (8 bits)
  - mapping function that gives its value is called ASCII table
  - each char/symbol has own value in decimal and hex
  - 'a' => 97 => 01100001
- using single quotes is a C++ literal
- `char ch = 'a';`
- double quote is a strong and not char
- if i want char on a new line, use _escape syntax_ => `'\n'`
  - also `'\t'` for tab
- arithmetic operators can be used because treated as numeric data type
  - `char ch2 = 'a' + 1;` => char is cast to `int`, and it becomes 98
  - if we wanted to use char, we'd have to specify `char` type in casting
  - can also subtract and assign

### string
- not a built in type in C++, so need to `#include <string>`
- inner rep is a sequence of chars
- C++ literals "abc", "This is a string\n", etc
- arithmetic
  - uses `+` for concatination

### bool
- short for boolean
- data represents is truth value (t/f)
- each bool is 1 byte (8 bits)
- `false` is represented by 0s; truth is any on-zero value
- C++ literals include `true` and `false`
- not can be represented by `!` (ie `!true`)
- there is also `and` and `or`
- boolean expressions have boolean values (the same way aritmetic exp have artimetic values)
- _atomic boolean expression_ values of bool literals
  - ie. `true`, `false`
  - can also include conditional statements with `<`, `>`, etc.
- _compound expression_ is combined with bool operators
  - ie. `true && !b`
- in C++, can't chain conditional operators
- since can't use assignment equals, uses `==` and `!=` to check equality
