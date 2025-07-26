///https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, m;
        while(r >= l){
            m = (l+r)/2;
            if(nums[m]>target)r=m-1;
            else if(nums[m]<target)l=m+1;
            else{
                return m;
            }
        }
        return l;
    }
};