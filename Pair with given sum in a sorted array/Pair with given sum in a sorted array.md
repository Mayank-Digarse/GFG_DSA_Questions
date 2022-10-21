You are given an array Arr of size N. You need to find all pairs in the array that sum to a number K. If no such pair exists then output will be -1. The elements of the array are distinct and are in sorted order.
Note: (a,b) and (b,a) are considered same. Also, an element cannot pair with itself, i.e., (a,a) is invalid.

Example 1:

â€‹Input:
n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 8
Output:
3
Explanation:
We find 3 such pairs that
sum to 8 (1,7) (2,6) (3,5)

â€‹Example 2:

Input:
n = 7
arr[] = {1, 2, 3, 4, 5, 6, 7}
K = 98 
Output:
-1 
 

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function Countpair() that takes an array (arr), sizeOfArray (n), an integer K and return the count of the pairs which add up to the sum K. The driver code takes care of the printing.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

 

Constraints:
0 <= Ai <=107
2 <= N <= 107
0 <= K <= 107

