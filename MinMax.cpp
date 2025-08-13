class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        int mn=nums[0];
        for(int i=0;i<n/2;i++)
        {
            if(nums[i]>nums[n-i-1])
            {
                swap(nums[i],nums[n-i-1]);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            mn=min(mn,nums[i]);
        }
    return mn;
    }
};
