# Algorithm Analysis

Take definition of a prime number.
- Solution 1: can count up to num to find factors
- Solution 2: let k be a divisor of num in the second half of range
  - k > num/2
  - d is k's complemtary divisor, so that d = num/k
  - we have d = num/k, num/num/2
  - num/k = 1, k = num
- Solution 3: use the square root and complementary divider
  - can use proof by contradiction - in order to show that a is true, assume a is false, then get to a universal contradiction
  - assume k, d are complementary divisors of num, and assume both are greater than sq(num)
  - num = k * d > sq(num) sq(num) = num, implies num > num

## Runtime Analysis
- depends on size of input
- each are function of n, n being the size of the input (n = num)
- runtime depends on operators we use, and on types of data applied to
  - ignore machine-dependent constants. count each primitive operation as 1
- we compare number of primitive operations executed by process as function of its input size

```
T1(n) = 5n + 4 <- slowest of the 3
T2(n) = 3n + 4 <- slower
T3(n) = (6 * sq(n)) + 4 <- faster and lowest value
```

- not measuring running time as seconds, but using primitive operations as units
- want to ignore the running time based on the computer running on
- if take a computer twice as fast, algorithm runs twice as fast
  - separate by quality
  - make asymptotic analysis
- T(n) = 3n^2 + 6n - 15 = theta(n^2)
  - comparing order of growth
  - rule of thumb to get order of growth
    - drop lower order terms (6n - 15)
    - keep high order terms
    - ignore leading constant

```
T1(n) = theta(n) -\_ asymptotically equivalent
T2(n) = theta(n) -/
T3(n) = theta(sq(n)) - is asymptotically better
```

**Definition:**
Let f(n) and g(n) be 2 functions mapping to positive integers to positive real numbers.
We say that f(n) = theta(g(n)) if there exist positive real constants c1, c2 and a positive integer constant n0 such that c2g(n) <= f(n) <= crg(n) for all n >= n0


