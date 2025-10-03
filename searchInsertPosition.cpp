/* Problem 

Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4 

Constraints:

1 <= nums.length <= 10^4
-10^4 <= nums[i] <= 10^4
nums contains distinct values sorted in ascending order.
-10^4 <= target <= 10^4
Answer
*/
// Time complexity O(n)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
            if(nums[i]<target)
            {
                res++;
            }
        return res;
    }
}; 
// Time complexity O(nlogn)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};
