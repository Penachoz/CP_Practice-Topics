//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    int findMin(vector<int>& nums) {
        //busqueda binaria
        int l = 0, r = nums.size()-1;
        int medio, menor = INT_MAX;
        while(l <= r){
            medio = l + (r-l)/2;
            if(nums[l] == nums[medio] && nums[l]==nums[r]){
                l++;
                r--;
            }
            else if(nums[l] > nums[medio]){
                if(nums[r] >= nums[l])
                    r=medio-1;
                else if(nums[medio]<=nums[r]){
                    r = medio-1;
                }else{
                    l = medio+1;
                }
            }else{
                menor = min(menor, nums[l]);
                l=medio+1;
            }
            menor = min(menor, nums[medio]);
        }
        return menor;
    }
};