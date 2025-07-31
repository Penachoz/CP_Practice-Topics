//https://leetcode.com/problems/minimum-size-subarray-sum/description/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0, minV = INT_MAX;
        while(r < nums.size()){
            sum+=nums[r];
            while(sum >= target && l <= r){
                if(sum>=target){
                    minV = min(minV, r-l+1);
                }
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(minV==INT_MAX)return 0;
        return minV;
    }
};