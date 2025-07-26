//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while(r > l+1){
            int sum = numbers[r] + numbers[l];
            if(sum > target){
                r--;
            }else if (sum < target){
                l++;
            }
            else{
                break;
            }
        }
        return {l+1, r+1};
    }
};