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
`(13)10 === (15)8 === (23)5 === (1101)2 === (D)16`

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

```
    _  _  _  1  0  0  1  0  1  1
2^ (9  8  7  6  5  4  3  2  1  0)

- method exposes bits from left to right
```

3. N in binary <--> N in hexadecimal
  - (3b9)16
    - 0011 -> 3
    - 1011 -> b
    - 1001 -> 9
  - transfer digit by digit independently
  - ( 0110 1101 0011 )2 = (6d3)16


| hex digit | 4 bit binary |
| ---------:| ------------:|
|     0     |    0000      |
|     1     |    0001      |
|     2     |    0010      |
|     3     |    0011      |
|     4     |    0100      |
|     5     |    0101      |
|     6     |    0110      |
|     7     |    0111      |
|     8     |    1000      |
|     9     |    1001      |
|     a     |    1010      |
|     b     |    1011      |
|     c     |    1100      |
|     d     |    1101      |
|     e     |    1110      |
|     f     |    1111      |

## Addition/Substraction
- carry over base like adding base 10
- generalize operations from base 10


## Signed Numbers
- numbers can be represented in negative numbers
- (26)10 = (11010)2
- (-26)10 = (-11010)2
- can't have negatives though because only 0 and 1, not negatives
- can use sign and magnitude
  ```
    1     000...011010
    \sign \magnitude
  ```
  - but typical way computers recognize -> it would be two's complement
- two's complement
  - to represent in k-bit
    1. positivce is unsigned binary, padded with a 0 to its left (k-bit)
    2. sum of a number and its additive inverse is 2^k
    - (26)10 = (00011010)8
                complement + 7 bits
    - [Stack Overlflow](https://stackoverflow.com/questions/1049722/what-is-2s-complement/1049774#1049774)
  - (-48)10 -> 11010000
  - can also do this another way by flipping then adding 1
