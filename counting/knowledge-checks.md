# Knowledge Checks

### how many bit strings of length 10 both begin and end with 1?
```
2 (options) ^ 8 (bits) = 256
```

### how many strings of 8 uppercase english letters are there that start and end with 'BO'?
```
B O _ _ _ _ B O

26 * 26 * 26 * 26 = 456,976
````

### how many ways can a photographer at a wedding arrange 6 people in a row, including bridge and groom if bride must be next to groom?
```
B G _ _ _ _
G B _ _ _ _

(5 * 2) * 4! = 240
````

### from a row of 10 hats, and a row of 12 hats, how many ways are there to select a hat?
```
10 + 12 = 22
```

### with 5 bus services and 4 train services, how many ways are there to travel?
```
5 + 4 = 9
```

### how many positive integers less than 100 have distinct digits?
```
[1, 100) -> -{99, 88, 77, 66, 55, 44, 33, 22, 11}
99 - 9 = 90
```

### how many positive integers less than 1000 have distinct digits and are even?
```
[1, 100) -> 90
[100, 200) -> -{100, 101, 110 - 119, 121, 122, 131, 133, 141, 144, 151, 155, 161, 166, 171, 177, 181, 188, 191, 199}
9 * 28 = 252
999 - 252 - 90 = 328
```

### how many bit string of length 8 contain 3 consecutive 0s or 4 consecutive 1s?

```
NOT CONFIRMED

0 0 0 _ _ _ _ _
6 * 2^5 = 192

1 1 1 1 _ _ _ _
5 * 2^4 = 80


192 + 80 - 24 - 24 = 224

=> 147
```

### how many bit string of length 10 contain either 5 consecutive 0s or 5 consecutive 1s
```
NOT CONFIRMED

(2^5 * 6) + (2^5 * 6) - 4 = 236

=> 222
```

### calculate
```
P(n, r) = n! / (n - r)!
C(n, r) = (n! / (n - r)!) / r!
        = n! / (r! * (n - r)!)


C(6, 3) = (6! / (6 - 3)!) / 3! = (720 / 6) / 6 = 120 / 6 = 6
P(8, 1) = 8! / (8 - 1)! = 8! / 7! = 8
C(9, 5) = (9! / (9 - 5)!) / 5! = (9! / 4!) / 5! = (9 * 8 * 7 * 6 * 5) / 120 = 126
P(6, 6) = 6! / 0! = 720
C(5, 1) = 5! / (1! * (5 - 1)!) = 120 / 24 = 5
C(5, 3) = 5! / (3! * (5 - 3)!) = 120 / (6 * 2) = 10
C(8, 8) = 8! / (8! * (8 - 8)!) = 1
C(12, 6) = 12! / (6! * (12 - 6)!) = (12 * 11 * 10 * 9 * 8 * 7) / 720 = 924
```

### how many bit strings of length 10 contain:
```
exactly 4 1s
10 choose 4 -> C(10, 4)
C(10, 4) = 10! / 4!(10 - 4)! = (10 * 9 * 8 * 7) / 24 = 30 * 7 = 210

at most 4 1s => 386



equal number 0s and 1s => 252
```