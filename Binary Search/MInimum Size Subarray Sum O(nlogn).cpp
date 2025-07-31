//https://leetcode.com/problems/minimum-size-subarray-sum/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> preSum(nums.size()+1,0);
        for(int i = 1 ; i <= nums.size() ; i++)preSum[i]=preSum[i-1]+nums[i-1];

        int l = 0, r = 0, sum = 0, minV = INT_MAX, m;
        
        int i = 0;
        while( i <= nums.size() ){
            l = i;
            r = nums.size();
            while(l <= r){
                m = l + (r-l)/2;
                //if(m < 0 || m > nums.size())break;
                //cout << " Presum m : " << preSum[m] << " i : " << i << " " << (m-i) << endl;
                if(preSum[m]>=target+preSum[i]){
                    minV = min(minV, m-i);
                    r = m - 1;
                }else{
                    l = m + 1;
                }
            }
            i++;
        }
        if(minV==INT_MAX)return 0;
        return minV;
    }
};