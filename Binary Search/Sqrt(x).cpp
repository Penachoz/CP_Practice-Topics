//https://leetcode.com/problems/sqrtx/description/?envType=problem-list-v2&envId=binary-search&

class Solution {
public:
    int mySqrt(int x) {
        long long l = 1, r = x, m, minV = 1;
        if(x==0)return 0;
        while(l <= r){
            m = l + (r-l)/2;
            if((m*m) < x){
                l=m+1;
                minV=max(minV, m);
            }
            else if ((m*m) > x)r=m-1;
            else return m;
        }
        return minV;
    }
};