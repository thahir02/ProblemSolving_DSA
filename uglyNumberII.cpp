/*
Problem :
Ugly Number II 
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.

Example 1:
Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

Example 2:
Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
 
Constraints:
1 <= n <= 1690
Answer
*/
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n,1);
        int tw2=0,th3=0,f5=0;
        for(int i=1;i<n;i++){
            int curtw2=2*dp[tw2];
            int curth3=3*dp[th3];
            int curf5=5*dp[f5];
            dp[i]=min(curtw2,min(curth3,curf5));
            if(dp[i]==curtw2){
                tw2++;
            }
            if(dp[i]==curth3){
                th3++;
            }
            if(dp[i]==curf5){
                f5++;
            }
        }
    //return dp[n-1];
    return dp.back();
    }
};
