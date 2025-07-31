

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int m;
        while(l <= r){
            m = l + (r-l)/2;
            if(target==nums[m])return true;
            if(nums[m]==nums[l]&&nums[l]==nums[r]){
                l++;
                r--;
            }
            else if(nums[r] >= nums[m]){//derecho ordenado
                if(target > nums[m] && target <= nums[r])l=m+1;
                else{
                    r=m-1;
                }
            }
            else{//izquierdo ordenado
                if(target < nums[m] && target >= nums[l])r=m-1;
                else l=m+1;
            }
        }
        return false;
    }
};