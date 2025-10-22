/*
Problem 
Add Digits

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Example 2:
Input: num = 0
Output: 0
 
Constraints:
0 <= num <= 2^31 - 1
Answer 
*/
class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while(num){
            ans=ans+num%10;
            num=num/10;
            if(num==0 && ans>9)
            {
                num=ans;
                ans=0;
            }
        }
        return ans;
    }
};
