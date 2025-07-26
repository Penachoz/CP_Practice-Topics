//https://leetcode.com/problems/binary-search/description/

    class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int ans = -1;
            int l = 0, r = nums.size()-1;
            int m;
            //if(r==l && nums[r]==target)ans = r;
            while(r>=l){
                m = (l+r)/2;
                if(nums[m] > target)r=m-1;
                else if(nums[m] < target)l=m+1;
                else {ans = m;break;}
            }
            return ans;
        }
    };