# Introduction to Functions

## Function
A and B are non empty sets. _f_ maps elements of A to B.

_f_(a) = b if b is unique Element of B assigned by function _f_ to element a of A. (aka A --> B)

### Domain
If _f_ is a function from A to B, A is the domain of _f_ and B is codomain of _f_. For _f_(a) = b, b is the image of a and a is the preimage of b. Range or image of _f_ is set of all images of elements of A. Also use "maps".

### Example
- For _f_ assigning last 2 bits of a bit string of _l_ 2 or greater to that string. (ie. _f_(11010) = 10) Domain of _f_ is set of all bit strings of _l_ 2 or greater, and both the codomain and range are set {00, 01, 10, 11}.

### Combining Functions
For f1 and f2 within range of A to R, (f1 + f2)(x) = f1(x) + f2(x)

### Image of S under _f_
_f_ from A to B and S is subset of A: image of S under _f_ is subset of B that consists of images of elements of S. Denoted by image of S by _f_(S), so

_f_ (S) = { t | Ǝ s ∈ S (t = _f_ (s)) } OR

{ _f_ (s) | s ∈ S }

## Onto/Surjection
_f_ from A to B is **onto**, or a surjectin, if for every element b ∈ B there is element a ∈ A with _f_(a) = b. Called **surjective** if onto.

### Bijection
- _f_ is one-to-one correspondence and onto, it is a **bijection** or bijective.
- One way to tell if a function is bijective is to see if it has an inverse.
