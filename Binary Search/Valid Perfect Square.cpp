//https://leetcode.com/problems/valid-perfect-square/description/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1, r = num, m;
        while(l<=r){
            m = l + (r-l)/2;
            if((m * m) > num)r=m-1;
            else if ((m * m) < num)l=m+1;
            else return true;
        }
        return false;
    }
};