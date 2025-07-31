//https://leetcode.com/problems/longest-increasing-subsequence/?envType=problem-list-v2&envId=binary-search

class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }

        vector<int> dp(n, 1); // dp[i] = LIS ending at nums[i]

        int maxLength = 1; // Minimum LIS length is 1 (if nums is not empty)

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            maxLength = max(maxLength, dp[i]);
        }
        return maxLength;
    }
};