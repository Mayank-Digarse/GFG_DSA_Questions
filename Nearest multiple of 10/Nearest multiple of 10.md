Given a string  N representing a positive number. The task is to round N to the nearest multiple of 10.
Note: If you are having two multiple equally apart from N then we will choose the smallest element among them.

 

Example 1:
 

Input : N = 15
Output : 10
Explanation:
Here N is 15. So, the number which is
multiple of 10 are 10, 20, 30. We can
see 10 and 20 are equally distant
from 20. So, we will choose the
smallest element among them i.e., 10.
Example 2:

Input : N = 29 
Output : 30 
 

Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function roundToNearest() that takes a string (N), and returns the nearest multiple of 10. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
 

Constraints:
1 <= |Number length| <= 105

 

