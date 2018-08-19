# Pigeonhole Principle

Says that if k boxes, and have k+1 objects, then there is at least one box containing 2 or more objects. Called pigeonhole because it is explained in terms of pigeons and pigeonholes.

Examples
- for 367 people, at least 2 have the same birthdays
- for 27 words, at least 2 words start with the same letter

## Corollary 1
- has to do with functions
- suppose hae 2 sets: one with k + 1 and one with k, if have function _f_, then it can not be 1-to-1. there are more in the domain than the codomain

## Generalization
- suppose there are 7 objects, and 3 boxes.
- by principle, at least 1 will have more than 1 object
  - at least one box will have 3 objects. even if distribute evenly, there needs to be even distribution.
- if have N objects placed into k boxes, then there is at least one box containing "ceiling" N/k objects (ceiling of 7 / 6 is 3)

## Subsequence Definition
- example of application
  - every sequence of n^2 + 1 distinct real numbers contains subsequence of length n + 1 that is either strictly increasing or strictly decreasing.

# Reading

If _k_ is a positive integer and _k_ + 1 or more objects are placed into _k_ boxes, then there is at least one box containing two or more of the objects.

- prove by using a proof by contraposition. Suppose that none of _k_ boxes contains more than one object - total number of objects would be at most _k_, but we have _k_ + 1 objects.
- also called Dirichlet drawer principle.
- function _f_ from a set with _k_ + 1 or more elements to a set with _k_ elements is not one-to-one.
  - suppose for each element y in the codomain of _f_. all elements in domain are _k_ + 1 and codomain is _k_, therefore _f_ is not one-to-one.

## Generalized pigeonhole principle

If _N_ objects are placed into _k_ boxes, then there is at least one box containing at least ceil(_N_/_k_) objects.

- Common type of problem asks for minimum number of objects such that at least _r_ of these objects must be in one of _k_ boxes when these objects are distributed among boxes. When we have _N_ objects, the generalized pigeonhole principle tells us there must be at least _r_ objects in one of the boxes as long as ceil(N / k) >= _r_.

- Every sequence of n^2 + 1 distinct real numbers contains a subsequence of length n + 1 that is either strictly increasing or strictly decreasing.

