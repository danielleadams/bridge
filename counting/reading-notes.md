# Counting

## Basics of Counting
- Example is the possibilities of password strings

### Product Rule
Definition: Procedure can be broken down into sequence of 2 tasks. If n1 ways to do first, then there are n2 ways, then there is n1 * n2 ways to perform task.

- Example: How many ways of bit string with length 7 are there? 2 ^ 7 = 128.
- Counting functions
  - How many functions are there from a set of _m_ elements to a set with _n_ elements?
    - Function corresponds to a choice of one wwith _n_ elements in the codomain for each of _m_ elements in the domain. By product rule, there are n^m functions from a set with _m_ elements to one with _n_ elements. For example, 5^3 different functions from a set with 3 elements to set of 5 elements.
- Counting one-to-one functions
  - How many one-to-one functions are there from a set with _m_ elements to one with _n_ elements?
    - Note: when _m_ > _n_ there are no one-to-one functions.
    - Given _m_ is less than or equal to _n_, elements of domain are a1, a2...am. There are _n_ ways to choose value of a1. Value of function at a2 is n - 1 because value for a1 can't be used again. For example, there are 5 * 4 * 3 one-to-one functions from a set with 3 elements to a set with 5 elements.
- Counting subsets of a finite set
  - | A1 * A2 * ... * Am| = |A1| * |A2| ... |Am|

### Sum Rule
Definition: If a task can be done either in one of n1 ways or one of n2 ways, where none of set of n1 ways is any of set of n2 ways, then there are n1 + n2 ways to perform task.

- What is the value of _k_, where n1, n2, nm are positive integers, after code is executed?

```
k = 0
for i1 = 1 to n1
    k  = k + 1
for i2 = 1 to n2
    k. = k + 1

// code

for im = 1 to nm
    k  = k + 1
```

Block is made of _m_ loops. Each time a loop is traversed, 1 is added to _k_. The value of _k_, is the number of ways the loop is traversed n1 + n2 + ... + nm. Given A1, A2.. Am finite sets, the number of elements in the union is the sum, or there are |Ai| ways to choose an element from Ai for i = 1,2..m. Therefore:

A1 ∪ A2 ∪ ... ∪ Am| = |A1| + |A2| + ... + |Am| when Ai ∩ Aj = for all i, j

Equality applies only when the the sets are pairwise disjoint (empty intersection).

### Subtraction Rule (inclusion-exclusion for 2 sets)

Definition: If a task can be done n1 ways or n2 ways, then the number of ways is n1 + n2 minus number common ways.
A task can be done 2 ways but some ways are common. Adding would give an overcount. To correctly count, number of ways counted twice need to be subtracted.

Also known as the **principle of inclusion-exclusion**, especially when used to count th enumber of elements in the union of 2 sets. Given A1 and A2 are sets.

|A1 ∪ A2| = |A1| + |A2| - |A1 ∩ A2|

### Division Rule

Definition: _n_/_d_ ways to do a task if it can be done using a procedure that can be carried out in _n_ ways, and for every way _w_, exactly _d_ of the _n_ ways correspond to a way _w_.

- If a finite set A is the union of _n_ pairwise disjoint subsets each with _d_ elements, then _n_ = |A| / _d_.
- If _f_ from A to B (where both finite sets) and every value y ∈ B there are _d_ values x ∈ A and _f_(x) = y, then |B| = |A|/_d_.

- Example: given 4 seats but a seat is the same when there is the same left and right neighbor.
  - 4! = 24, then there are 4 ways to choose seat 1 --> 24 / 4 = 6.

### Tree Diagrams
Counting problems can be solved with tree diagrams, with a root and number of branches for each possible choice. Outcomes become leaves.
