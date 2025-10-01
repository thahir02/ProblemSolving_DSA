/*Problem : -
Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array. 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]
Output: [0]
 
Constraints:

1 <= nums.length <= 10^4
-2^31 <= nums[i] <= 2^31 - 1
Answers : -   
*/
//Pointer and swap approach 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fir=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[fir]);
                fir++;
            }
        }
    }
};
// Another approach 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int nonzero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
            {
                nums[nonzero]=nums[i];
                nonzero++;
            }
        }
        for(int i=nonzero;i<n;i++)
            {
                nums[i]=0;
            }
    }
};
