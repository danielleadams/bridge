# Digital Data (Module)

## Recap
- We know memory is made of bits and of 1 and 0.
- has 2 states, need to represent lots of data with primitives
- Numbers can be represented in binary
  - how is text represented in 0 and 1?
  - images, video, audio?
  - how can everything be represented in numbers?
- For text, there is a mapping for each symbol in alphabet with number
- For images, each pixel is represented by a color which has a set of numbers

## Base 10
- numbers are represented in 10s/decimals
- sums groups of ones when it gets to 10
- uses 0 - 9 to represent values in each position

## Base 5
- now grouping 5 objects together
- 5 ones group to another 5
- after 44, 100 comes next
- digits used only 0 - 4

## Base 8
- now grouping 8 objects together
- 0 - 7, then comes 10; after 17, comes 20

## Counting in Base 2
- only need 0, 1
- aka binary
- 0 1, then 10/2

## Counting in Base 16
- hexadecimal system
- 0 - 9, then a - f; 10 - 19, then 1a - 1f, then 20

## Equivalent Representations
(13)10 === (15)8 === (23)5 === (1101)2 === (D)16

## Base Conversions
1. N in base b -> N in decimal
  - positions of each digit matter and can be generalized to other number systems
  -> take (3 7 5)10
  - each value represents group of 10/powers of 10
  - (375)10 = 5 * 10^0 + 7 * 10^1 + 3 * 10^2
  - (125)8 = 1 * 8^0 + 2 * 8^1 + 5 * 8^2
  - if ((a)n ...a2 a1 a0)b = a0b^0 + .. + (a)nb^n
Examples
a. (123)8 -> base 10 = 3 * 8^0 + 2 * 8^1 + 1 * 8^2 = (83)10

2. N in decimal -> N in base b
  - (75)10 -> ( __ )2

    _  _  _  1  0  0  1  0  1  1
2^ (9  8  7  6  5  4  3  2  1  0)

- method exposes bits from left to right

3. N in binary <--> N in hexadecimal
  - (3b9)16 = ( 0011 1011 1001 )2
                \3    \b   \9
  - transfer digit by digit independently
  - ( 0110 1101 0011 )2 = (6d3)16
      \6    \d   \3
hex digit | 4 bit binary
----------+--------------
    0     |    0000
    1     |    0001
    2     |    0010
    3     |    0011
    4     |    0100
    5     |    0101
    6     |    0110
    7     |    0111
    8     |    1000
    9     |    1001
    a     |    1010
    b     |    1011
    c     |    1100
    d     |    1101
    e     |    1110
    f     |    1111

