//https://leetcode.com/problems/find-the-duplicate-number/description/?envType=problem-list-v2&envId=binary-search


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]])swap(nums[0],nums[nums[0]]);
        return nums[0];
    }
};