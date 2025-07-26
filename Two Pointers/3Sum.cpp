//https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>>st;
        int l,r,sum;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]>0)break;
            l = i+1;
            r = n-1;
            while(r > l){
                sum = nums[i]+nums[l]+nums[r];
                if(sum > 0)r--;
                else if(sum < 0)l++;
                else{
                    vector<int> temp={nums[i],nums[l],nums[r]};
                    st.insert(temp);
                    l++;
                    r--;
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());
    }
};