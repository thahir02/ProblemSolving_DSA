/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int prev_sum=0;
        int cur_sum;
// By using KADANE'S ALGORITHM
    for(int i=0;i<n;i++)
    {
        cur_sum =prev_sum+nums[i];
        ans=max(ans,cur_sum);
        prev_sum=max(0,cur_sum);
    }
    return ans;
    }
};
// burte force
    //    for(int i=0;i<nums.size()-1;i++){
    //     sum=0;
    //     for(int j=i;j<nums.size()-1;j++){
    //         sum=sum+nums[j];
    //         ans=max(ans,sum);
    //     }
    //    } 
    //    return ans;