/*
Problem 
Reverse Integer 

Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 
Constraints:
-2^31 <= x <= 2^31 - 1
Answer
*/
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            int last_in=x%10;
            x=x/10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && last_in>7)) return 0;// if it max the integer range 
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && last_in<-8)) return 0;// if it min the integer range 
          //for understanding example let assume int range is 2000 & give number is 1009 
          //if we reverse the number gives 9001 which will become out of integer range
            rev=rev*10+last_in;
        }
        return rev;
    }
};
