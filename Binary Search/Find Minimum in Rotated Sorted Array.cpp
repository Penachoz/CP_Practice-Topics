//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1, m = 0;
        while(l < r){
            m = l + (r-l)/2;
            //cout << nums[l] << " - " << nums[r] << " " << nums[m] << endl;
            if(nums[m]>nums[r])l=m+1;
            else r = m;
        }
        return nums[l];
    }
};