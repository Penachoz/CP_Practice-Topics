//https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long long l, r, m;
        for(auto x : matrix){
            l = 0;
            r = x.size()-1;
            if(target >= x[l] && target <= x[r])
            while(l <= r){
                m = l + (r-l) / 2;
                if(x[m]<target)l=m+1;
                else if (x[m]>target)r=m-1;
                else return true;
            }
        }
        return false;
    }
};