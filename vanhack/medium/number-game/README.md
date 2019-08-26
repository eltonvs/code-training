# Number Game

Alex has an integer and wants to convert it to *0* using the following operations on its binary representation:

- Change the ith binary digit only if *(i+1)<sup>th</sup>* binary digit is 1 and all other binary digits from *(i+2)* to the end are zeros.
- Change the rightmost digit without restriction.


Alex can use the above operations as many times as necessary, but wants to determine the minimum number of operations required. For example, given the number *n = 8<sub>10</sub> = 1000<sub>2</sub>*. 15 operations are required to convert the number to zero under the rules:

```
1000→1001→1011→1010→1110→1111→1101→1100→0100→0101→0111→0110→0010→0011→0001→0000
```

Note: In the binary representation of a number, the binary digit's positions are numbered as 0 to *x-1* from left to right, where *x* is the number of digits in the binary representation of the number.

---

## Function Description

Complete the function `minOperations` in the editor below. The function must return an integer that denotes the minimum number of operations required to covert n to 0.



`minOperations` has the following parameter(s):

- `n`:  integer, the number Alex has.

---

## Constraints

```
1 ≤ n ≤ 1015
```

---

## Input Format For Custom Testing

### Sample Case 0

**Sample Input For Custom Testing**
```
13
```

**Sample Output**
```
9
```

**Explanation**

The binary representation of 13 is 1101. This is the sequence of steps that change 13 to 0 in this game.

```
1101→1100→0100→0101→0111→0110→0010→0011→0001→0000
```

### Sample Case 1

**Sample Input For Custom Testing**
```
11
```

**Sample Output**
```
13
```

**Explanation**

The binary representation of 11 is 1011. This is the sequence of steps that change 11 to 0 in this game.

```
1011→1010→1110→1111→1101→1100→0100→0101→0111→0110→0010→0011→0001→0000
```
