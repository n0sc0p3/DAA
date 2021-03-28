# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019231  |   Gaurav | sassyfafdalover |
|    IIT2019232  |   Vinit | n0sc0p3 | 
|    IIT2019233  |   Prince | thehappysoul |

**Group No-** 
16

**Faculty Name-**
R.Kala

**Mentor Name-** 
Md. Meraz

---
## Problem Statement
In a large binary string, find the length of substring which is having maximum difference of number of 0s and number of 1s (number of 0s – number of 1s). In case of all 1s print -1. Solve using Dynamic programming.

---
## How to use code
1. Clone git repo from https://github.com/n0sc0p3/DAA.git
2. Navigate to assignment folder.
```
#Download project
git clone https://github.com/n0sc0p3/DAA.git
```
---

Run the code
```
clang++ -std=c++17 -stdlib=libc++ -g code.cpp -o code
```
---

**Test case**
```
Test Case-1
Input:
0001101011110000001100110001
Out:
7
#--------------------------#
Test Case-2
Input:
0101010001111000000101000001000
Out:
12
```

---

### Theory
A string that consists of only 1’s ans 0’s is said to be a binary string.

To find maximum difference of number of 0s and number of 1s, we convert all 0’s in the binary string into 1’s and all 1’s into -1’s. Now, all we have to do is to find out the size of sub array with maximum Using Kadane’s Algorithm<sup>#</sup>.

<sup>#</sup>Given an array, Kadane’s algorithm is able to find the maximum sum and size of a contiguous sub array in an array with a run time of O(n). Kadane’s algorithm uses the concept of dynamic programming.

---

### Analysis

**Time Complexity**
One full array traversal is needed, so the time complexity is O(n).

**Space Complexity**
We don’t need to tabulate all the sub results, but only the recently derived ones. This results in O(1) space complexity.

---

### References

1. https://www.geeksforgeeks.org/maximum-difference-zeros-ones-binary-string/
2. https://www.geeksforgeeks.org/maximum-difference-zeros-ones-binary-string-set-2-time/
