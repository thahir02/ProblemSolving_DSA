/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
Example 1:
Input: nums = [1,2,3]
Output: 6
Example 2:
Input: nums = [1,2,3,4]
Output: 24
Example 3:
Input: nums = [-1,-2,-3]
Output: -6
Constraints:
3 <= nums.length <= 104
-1000 <= nums[i] <= 1000
*/
//Best solution 
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]>=0 || nums[n-1]<0)
        {
            return nums[n-1] * nums[n-2] * nums[n-3];
        }
        return max(nums[0] * nums[1] * nums[n-1],nums[n-1] * nums[n-2] * nums[n-3]);
    }
};
// average solution fails at [-100,-2,-3,1] expected output 300 complilation output 200.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n=nums.size();
       int mx[3]={-1001,-1001,-1001};
       int mn[2]={1001,1001};
       int fir,sec;
       for(int i=0;i<n;i++)
       {
        if(nums[i]>=mx[0])
        {
            fir=mx[0];
            sec=mx[1];
            mx[0]=nums[i];
            mx[1]=fir;
            mx[2]=sec;
        }
        else if(nums[i]>=mx[1])
        {
            fir=mx[1];
            mx[1]=nums[i];
            mx[2]=fir;
        }
        else if(nums[i]>mx[2])
        {
            mx[2]=nums[i];
        }
       if(nums[i]<=mn[0])
        {
            fir=mn[0];
            mn[0]=nums[i];
            mn[1]=fir;
        }
        else if(nums[1]<mn[1])
        {
            mn[1]=nums[i];
        }
       }
       return max(mn[0] * mn[1] * mx[0],mx[0] * mx[1] * mx[2]);
    }
};
