# Permutations and Combinations

## R-permutations
- any order or arrangement of distinct objects is a permutation
- num of arrangements of 5 students is 5!
- r objects from set of n objects is r permutation
  - P(n, r) = n(n - 1)(n - 2) ... (n - r + 1)
  - P(n, r) = n! / (n - r)!

## R-combinations
- there are cases that order doesn't matter and just want a subset of set
- if selecting 3 students to form a committee, it is just a set. How many ways can form a committee of 3 students?
  - can use the product rule, but that's a permutation
  - total number includes arrangements, so we can use r!
  - C(n, r) = P(n, r) / r!

- Find the number of 5-combinations of a set with nine elements. Do not answer in terms of C(n, r).
- How many permutations of { a, b, c, d, e, f, g } end with a?

## Combinations
- We are assuming that n is nonnegative integer and r is an integer with r greater than or equal to 0 and less than or equal to n.
- How can we prove P(n, r) is true?