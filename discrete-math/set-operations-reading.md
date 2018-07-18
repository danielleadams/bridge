# Sets (2.1)

## intro

### sets
_set_ unordered collection of elements. when using braces to display elements (ie. _{a, b, c}_), this is known as the **roster method**.

Another way to describe set is to use **builder notation**. All elements are characterized with a statement.

Example: O = {_x_ | _x_ is an odd positive integer less than 10 }

or specifyng universe as set of positive integers

O = {_x_ ∈ **Z**+ | _x_ is odd and x < 10}

**Q**+ = {_x_ ∈ **R** | _x_ = p/q, for some positive integers _p_ and _q_}

#### important set representations
```
**N** = {0,1,2,3,...}, set of **natural numbers**
**Z** = {...,-2,-1,0,1,2,3,...}, set of **integers**
**Z**+ = {1,2,3,...}, set of **positive integers**
**Q** = {p/q | p ∈ **Z**, _q_ ∈ **Z**, and _q_ does not equal 0}, set of **rational integers**
**R**, set of **real numbers**
**R**+, set of **positive real numbers**
**C**, set of **complex numbers**
```

_Note: sometimes 0 is not a natural number, so be clear to check the definition in other books._

### intervals
[a, b] = {x | a __<__ x __<__ b} --> _closed interval_
[a, b) = {x | a __<__ x < b}
(a, b] = {x | a < x __<__ b}
(a, b) = {x | a < x < b} --> _open interval_

### equal
{1,3,5} = {1,1,1,3,3,3,5,5} because they share the same elements

### empty set
- ∅ is an **empty** or null set
- **singleton set** is a set with one element, ie. {∅}

## power sets

given a set _S_, hte power set is all the subsets of _S_. the power set of _S_ is denoted by P(_S_)

## Cartesian Products

because sets aren't ordered, they can use **ordered n-tuples**. is such that (a1, a2.. a1+n) and a1 is first and a1+n is last.

> (a1, a2..a1+n) = (b1, b2..b1+n)

Ordered 2-tuples are called **ordered pairs**. (a, b) and (c, d) are equal if a = c and b = d.

# Set Operations (2.2)

## intro

### disjoint
2 sets are **disjoint** if their intersection is an empty set.

If we're looking for cardinality (length), may use the **principle of inclusion-exclusion**.

|A ∪ B| = |A| + |B| - |A ∩ B|

### difference
Denoted by A - B, and yields a set containing elements that are in A but not B. Also called the _complement of B with respect to A_.

Sometimes denoted by A\B.

## generalized unions and intersections (2.2)

_union_ is a collection of sets is the set that contains all elements that are members of at least one set.

A1 ∪ A2 ∪ ... ∪ An = ∪ | n / Ai / i = 1

_intersection_ of a collection of sets is the set that contains those elements that are members of all sets in collection

A1 ∩ A2 ∩ ... ∩ An = ∩ | n / Ai / i = 1

For i = 1, 2, ..., let Ai = {i, i + 1, i + 2}. then,

  ∪ | n / Ai / i = 1 => ∪ | n / {i, i + 1, i + 2} / i = 1 => {1, 2, 3, ...}

  ∪ | n / Ai / i = 1 => ∪ | n / {i, i + 1, i + 2} / i = 1 => {n, n + 1, n + 2} => An

_Look back at Example 16 & 17 p. 133-134 for more_

## computer representation of sets

- sets can be represented in various ways
  - unordered is time consuming because requires lots of searching for elements
  - can use an arbitrary ordering of element of U set
- can use a bit string to represent a set of odd integers
  - {1,3,5,7,9} => '1010101010'
  - {2,4,6,8,10} => '0101010101'
  - {1,2,3,4,5} => '1111100000'
- can solve for complement, union and intersect the same way as sets