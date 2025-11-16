/*
Problem :
Count Primes :
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:
Input: n = 0
Output: 0

Example 3:
Input: n = 1
Output: 0

Constraints:
0 <= n <= 5 * 10^6

Answer 
*/
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return false;
        }
        vector<bool> isPrime(n+1,true);
        isPrime[0]=false;
        isPrime[1]=false;
        isPrime[n]=false;
        for(int p=2;p*p<=n;p++){
            if(isPrime[p]==true){
                for(int i=p*p;i<=n;i+=p){
                    isPrime[i]=false;
                }
            }
        }
        int ans=0;
        for(auto ele : isPrime){
            if(ele){
                ans++;
            }
        }
        return ans;
    }
};
