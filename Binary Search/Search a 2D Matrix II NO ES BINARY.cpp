//https://leetcode.com/problems/search-a-2d-matrix-ii/description/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long long l = 0, r = matrix[0].size()-1, m;
        cout << l << " " << r << endl;
        while(l < matrix.size() && r >= 0){
            if(matrix[l][r] == target)return true;
            else if(matrix[l][r] < target)l++;
            else if(matrix[l][r] > target)r--;
        }
        return false;
    }
};