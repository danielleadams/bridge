# Knowledge Checks

- is f a function from R to R if

  - f(x) = 1/x?
    - false. the value is undefined for 0.

  - f(x) = +/- sqrt(x^2 + 1)
    - false. it gives 2 images for a given preimage. for each preimage in the domain, the function must map to only one image in the codomain.

- is f a function from Z to R if

  - f(x) = +/- x
    - false. 2 images for a given preimage

  - f(x) = |sqrt(x2 + 1)|
    - true. there is absolute value taken, and returns only one image for each preimage. additionally, no opp to take sq root of negative num

- for which domain, codomain pair is f(x) a function?

  - f(x) = 1/(x^2 - 4)
    - R -{-2, 2}, R. for each preimage in the domain it must have an image in the codomain. however, for x = 2 and x = -2, we divide by 0, which is undefined. Therefore, domain of the function cannot contain values 2 and -2.

- determine whether the following function is a bijection

  - from R to R: f(x) = -3x + 4
    - true. to determine, is to determine if it has an inverse. f(x) from R to R has inverse if and only if f(x) is a bijection from R to R. In this case, inverse is x = (f(x)-4) / -3

  - from R to R: f(x) = -3x^2 + 7
    - false. with values -2 and 2, the same answer is -5, and it is not injective

  - from R to R: f(x) = (x + 1)/(x + 2)
    - false. with x = -2, division by 0 gives undefined.

  - from R to R: f(x) = (x^5 + 1)
    - true. there exists an inverse.

  - from R to R: f(x) = (x^2 + 1)
    - false. there are 2 codomain elements that map from domain elements.