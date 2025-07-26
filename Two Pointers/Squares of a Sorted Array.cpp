//https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size()-1, index = nums.size()-1;
        vector<int> nums2(nums.size(), 0);
        while(index >= 0){
            if(abs(nums[l]) > abs(nums[r])){
                nums2[index]=nums[l]*nums[l];
                l++;
            }else{
                nums2[index]=nums[r]*nums[r];
                r--;
            }
            index--;
        }
    return nums2;
    }
};