//https://leetcode.com/problems/first-bad-version/description/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1, r = n, m, val;
        while(r>=l){
            m = l + (r-l) / 2;
            if(isBadVersion(m)){r=m-1;val=m;}
            else l=m+1;
        }
        return val;
    }
};