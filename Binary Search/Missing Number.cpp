//https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(auto x : nums)s+=x;
        return ((n*(n+1))/2)-s;
    }
};