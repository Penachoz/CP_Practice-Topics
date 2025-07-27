//https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //encontrar un numero tal que a[1]/x + a[2]/x + ... + a[k]/x == h y sea lo minimo     posilble
        long long ans = 0;
        sort(piles.begin(), piles.end());
        long long l = 1, r = piles[piles.size()-1], m, minV = INT_MAX;
        while(l <= r){
            ans = 0;
            m = l + (r-l)/2;
            for(double x : piles){ans+=(x + m-1) / m;
            }
            if(ans==h){
                //minimizar r = m-1;
                r=m-1;minV=min(minV, m);
            }
            else if(ans > h)l=m+1;
            else {r=m-1;minV=min(minV, m);};
        }
        return minV;
    }
};