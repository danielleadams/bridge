# Introduction

## What is computer science?
- Study of Algorithms - how code can be run in different OS and in applications
- Discrete math is math used in computer science/algorithms

## Sorting Algorithms
- some sorting algorithms are "faster" then others
- With Big O(n) -> compute based on input
  - for this, needs discrete math

## Stable Marriage Problem
- efficiency vs. correctness
  - how can you tell an algorithm is correct?
    - proof by example, if has correct output (incorrect)
    - need assurance that all input is correct output
-  given n men and n women
  - each man gives list of preferences as does women
  - could randomly assign, but lead to inefficiency
  - said to be stable, if paired, then switched if both prefers the other
  - more [here](https://www.youtube.com/watch?v=Qcv1IqHWAzg)
  - if start assigning men first, men get best choices.
    -> if want a specific option, must go first

## Sets
- common math object
- **set** is unordered collection of objects
  - with elements or members.
  - A set is said to contain elements
  - a ∈ A: A contains a
  - a ∈/ A: A does not contain a
  - { a, b, c, d } describes a set
- a set can be a subset of itself
  - while true intuitively -> should be proven too with logical statements/theorem
  - empty set of `null` is subset of every set
  - is called **vacuous proof**
- if A is subset of B, but A does not equal B
  -> A is a **proper** subset of B
- a set is a equal if and only if all elements are the same
- cardinality of a set is the number of elements or length
  - when discussing, referring to finite sets (ie. |S|)
- infinite, refers to not finite
  - ie. all positive integers is infinite

## Sets and Operations
- notion of "union" is elements that belong to both (A U B)
  - to specify multiple sets can use union of n sets
- "intersection" is elements in common (ie. A n B)
  - can also express intersection of n sets
- when A does not intersect B, they are disjoint
- A \ B is the difference of A and B or A minus B
- complement of an A set is all elements not in A

## Set Identities

### Identity Laws
A n U = A
A U 0 = A

### Domination Laws
A U U = U
A n 0 = 0

### Idempotent Laws
- A union or intersection of itself is A

### Complementation Laws
- complement of A, and then the complement of that will equal A

### Cummutative Laws
- A U B === B U A
- A n B === B n A

### Associative Laws
- A U (B U C) === (A U B) U C
- A n (B n C) === (A n B) n C

### Distributive Laws
- A U (B n C) === (A U B) n (A U C)
- A n (B U C) === (A n B) U (A n C)

#### Membership Table for Distributive Property
- can construct table to prove results
- each column is a set
  - what are the possibilities?
  - what we can find is that the columns are equal for multiple values of sets

### De Morgan's Laws
- complement of A intersect B is equal to complement of A U complement of B
- complement of A U B is equal to complement of A intersect complement of B

### Absorption Laws
- A U (A n C) = A
- A n (A U B) = A

### Complement Laws
- A union complement of A is universal
- A intersect complement of A is null
