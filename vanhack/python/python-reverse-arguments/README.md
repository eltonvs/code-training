# Python Reverse Arguments

Given an arbitrary function, return a new function which, when called, returns the result of the original function called with the arguments in reversed order.

For example, if the original function, `f`, is a `pow` function, *f(2,3) = 8*, *2<sup>3</sup> = 8*, then the correct result is a function `g`, with *g(3,2) = 9*, because *3<sup>2</sup> = 9*. Complete the function described below. Your function will be tested on 4 different functions included in the locked template code.


## Function Description

Complete the function `reversed_args` in the editor below. The function must return a new function `g` which, when called, returns the result of `f` called with the arguments reversed.


`reversed_args` has the following parameter(s):
* `f`: the function whose result needs to be computed with the order of arguments reversed.


## Constraints

* *1 ≤ q ≤ 100*
* None of the functions will be called with more than 100 arguments.
* The length of every string argument is at most 10.

---

### Sample Case 0
#### Sample Input 0

```
4
pow 2 3
cmp 1 2
join_with coder best the are you ,
capitalize_first_and_join first second third
```

#### Sample Output 0

```
9
1
you,are,the,best,coder
THIRDsecondfirst
```

#### Explanation 0

The expected outputs are very easy to understand if we only pay attention to what the given functions should return, and call them with arguments provided in reverse order. The functions are:

* function `pow(a,b)` returns *a<sup>b</sup>*
* function `cmp(a,b)` returns *-1* if a < b, *0* if a == b, and *1* if a > b
* function `join_with` takes at least two arguments, where the first argument is the separator and the other arguments are strings that will be joined in the returned string with the separator in the order they are given
* function `capitalize_first_and_join` takes at least 1 argument and returns a string that represents given arguments joined together where the first argument is capitalized
