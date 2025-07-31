https://leetcode.com/problems/count-of-smaller-numbers-after-self/?envType=problem-list-v2&envId=binary-search

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> result;
        vector<int> sorted;
        
        // Process from right to left ⬅️
        for (int i = nums.size() - 1; i >= 0; --i) {
            // Find insertion position using binary search 🔍
            auto insert_pos = lower_bound(sorted.begin(), sorted.end(), nums[i]);
            int count = insert_pos - sorted.begin();
            result.push_back(count);
            // Insert into the sorted list to maintain order
            sorted.insert(insert_pos, nums[i]);
        }
        
        // Reverse to get the correct order 🔄
        reverse(result.begin(), result.end());
        return result;
    }
};