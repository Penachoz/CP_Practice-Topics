//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, minV = INT_MAX, maxV = 0, m;
        bool flag = false;
        while(l <= r){
            m = l + (r-l)/2;
            if(nums[m] > target)r=m-1;
            else if(nums[m] < target)l=m+1;
            else{
                r=m-1;
                minV=min(minV, m);
                flag = true;
            }
        }
        r=nums.size()-1;
        if(!flag)return {-1,-1};
        else{
            l = minV;
            while(l <= r){
                m = l + (r-l)/2;
                if(nums[m] > target)r=m-1;
                else if(nums[m] < target)l=m+1;
                else{
                    l=m+1;
                    maxV=max(maxV, m);
                }
            }
            return {minV, maxV};
        }
    }
};