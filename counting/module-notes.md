# Counting

## The Product Rule
- If there are n1 ways of doing first task and n2 ways to do second task, there are n1 * n2 ways to do the procedure.
- Example
  - Sanchez and Mateo have 12 * 11 or 132 ways to assign offices

## The Sum Rule
- If a task can be done in one of n1 ways or in one of n2 ways, where none of n1 is the same as n2, then there's n1 + n2 ways
- Example
  - 37 faculty and 83 students. Total ways to pick a member is 37 + 83 or 120.

## Subtraction Rule
- Sometimes there's possibility of members in more than one list, and therefore subtraction rule applies. If task n1 can be done n1 or n2 ways, then number of ways to do task is n1 + n2 minus number of ways to do task that are common to the 2 different ways.
- Also known as the principle of inclusion-exclusion. In terms of sets:
  - |A1 ∪ A2| = |A1| + |A2| - |A1 ∩ A2|
- Given example of bit string, how many possibilities of 8-bit strings start with 1 or end with 00.
  - start with 1 is 2^7
  - end with 00 is 2^6
  - need to subtract, so remove those that start with 1 and end with 00
  - answer is 2^7 + 2^6 - 2^5 = 160
- Knowledge Check
  - How many bit string of length 8 contain 3 consecutive 0s or 4 consecuritive 1s? length 10 of 5 0s or 5 1s?