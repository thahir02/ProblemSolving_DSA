/* Problem 
Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.

Example 1:
Input: n = 1
Output: true
Explanation: 2^0 = 1

Example 2:
Input: n = 16
Output: true
Explanation: 2^4 = 16

Example 3:
Input: n = 3
Output: false 

Constraints:
-2^31 <= n <= 2^31 - 1
Answers 
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
//Approach 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(not n or n==INT_MIN){
            return 0;
        }
        return((n&(n-1))==0);
    }
};
