'''
You are given an integer n.
Let r be the integer formed by reversing the digits of n.
Return the sum of all prime numbers between min(n, r) and max(n, r), inclusive.

Example 1:
Input: n = 13
Output: 132
Explanation:
The reverse of 13 is 31. Thus, the range is [13, 31].
The prime numbers in this range are 13, 17, 19, 23, 29, and 31.
The sum of these prime numbers is 13 + 17 + 19 + 23 + 29 + 31 = 132.

Example 2:
Input: n = 10
Output: 17
Explanation:
The reverse of 10 is 1. Thus, the range is [1, 10].
The prime numbers in this range are 2, 3, 5, and 7.
The sum of these prime numbers is 2 + 3 + 5 + 7 = 17.

Example 3:
Input: n = 8
Output: 0
Explanation:
The reverse of 8 is 8. Thus, the range is [8, 8].
There are no prime numbers in this range, so the sum is 0.
 
Constraints:
1 <= n <= 1000

'''

class Solution:
    def is_prime(self, n1):
        if n1 < 2:
            return False
        for i in range(2, int(n1**0.5) + 1):
            if n1 % i == 0:
                return False
        return True

    def sumOfPrimesInRange(self, param_1):
        # 1. Calculate the reversed number
        rev = int(str(param_1)[::-1])
        
        # 2. Dynamically set the start and end of the range
        start = min(param_1, rev)
        limit = max(param_1, rev)
        
        # 3. Sum primes within the inclusive range [start, limit]
        total_sum = 0
        for i in range(start, limit + 1):
            if self.is_prime(i):
                total_sum += i
                
        return total_sum
