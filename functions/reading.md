# 2.3 Functions

## Intro

In some instances, assignment of elements in a set to a second set (which may be the same as the first). Functions are used with sequences and strings.

Two functions are **equal** when they have the same domain, codomain and map each element of their common domain to the same element in their common codomain. If we change domain or codomain of a function, then it is a different function. If the mapping changes, its a different function.

A function is **real-valued** if its codomain is set of real numbers and it is **integer-valued** if its codomain is set of integers. Two real-valued functions or 2 integer-valued functions with the same domain can be added, as well as multiplied.

### One-to-One

A function that never assigns the same value to two different domain elements. It is _injective_ if it is one-to-one.

A function is _one-to-one_ if _f_(a) = _f_(b) and a = b for all a and b in the domain of _f_.

A function whose domain and codomain are subsets of the set of real numbers is called _increasing_ if _f_(x) is less than or equal to _f_(y), and _strictly increasing_ if _f_(x) < _f_(y), when x < y and x and y are in the domain of _f_. Similarly, they are _decreasing_ and _strictly decreasing_ for the reverse.

### Onto

For a function with a range and codomain that are equal, in which every member of the domain is the image of some element of the domain.

A function from A to B is called _onto_ if for every elememnt b ∈ B there is an element a ∈ A with _f_(a) = b.

### Bijection

When it is one-to-one and onto.

The _identity function_ with iota of A being A --> A is bijective because the function assigns each element to itself.

For _f_ : A --> B:
- To show _f_ is injective, show _f_(x) = _f_(y) for arbitrary x, y ∈ A with x ≠ y, then x = y.
- To show _f_ is not injective, find particular elements x, y ∈ A such that x ≠ y and _f_(x) = _f_(y).
- To show _f_ is surjective, consider arbitrary element y ∈ B and find an element x ∈ A such that _f_(x) = y.
- To show _f_ is not surjective, find particular y ∈ B such that _f_(x) ≠ y for all x ∈ A.

## Inverse Functions and Compositions of Functions

Going from _b_ in B is the _inverse function_. Denoted by _f_^-1 and meaning _f_^-1(b) = a.

One-to-one is _invertible_. It's not invertible because the inverse function does not exist and there is more than 2 outputs.
- _f_(x) = x + 1 is invertible for Z --> Z
- _f_(x) = x^2 is not invertible for R --> R

Let _g_ be a function from A to B and _f_ be set B to C. The _composition_ of the functions _f_ and _g_ are denoted for all a ∈ A by _f_ ∘ _g_ is (_f_ ∘ _g_)(a) = _f_(_g_(a)).
- In other words, _f_ ∘ _g_ is the function that assigns the element of _a_ of A the element assigned by _f_ to _g_(a).
- To find, apply function _g_ to _a_ to obtain _g_(a).
- Then, apply _f_ to result of _g_(a).
- Note that composition cannot be defined unless range of _g_ is a subset of the domain _f_
- _f_ ∘ _g_ and _g_ ∘ _f_ are not equal

With a composition of function and its inverse, in either order, and identiy function is obtained.
- If _f_ is one-to-one correspondence from A to set B, then the inverse of function _f_ exists and is one-to-one from B to A. The inverse of function reverses the correspondence of the original function. so inverse of _f_(b) is equal to a when _f_(a) = b, and _f_(a) = b when the inverse of _f_(b) = a.

## Graphs of Functions

Associating a set of pairs A x B from A to B is called the graph of the function and often displayed with a picture. It can be represented with

{(a, b) | a ∈ A and _f_(a) = b }

## Partial Functions

A _partial function_ is used to avoid infinite loop or overflow. It takes a subset of A and maps to subset of B when the domain and codomains are unknown.
