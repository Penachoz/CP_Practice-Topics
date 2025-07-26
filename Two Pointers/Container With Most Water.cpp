//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, maxC = 0;
        while(r > l){
            maxC = max(maxC, min(height[l],height[r])*(r-l));
            if(height[r]>height[l])l++;
            else if(height[r]<height[l])r--;
            else {
                r--;
                l++;
            }
        }
        return maxC;
    }
};