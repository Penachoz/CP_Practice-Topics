//https://leetcode.com/problems/h-index-ii/?envType=problem-list-v2&envId=binary-search

class Solution {
public:
    int hIndex(vector<int>& citations) {
        // # de citas y cantidadd de papers
        //buscar numero mas cercano entre estos min(mas citas, mas cantidad)
        // minimo h # de papers que han sido citados >= h veces
        int l = 0, r = citations.size()-1, m, maxV = 0;
        int n = r+1;
        //if(citations.size()==1 && citations[0]>0)return 1;
        while(l <= r){
            m = l + (r-l)/2;
            if(citations[m]<(citations.size()-m))l=m+1;
            else if(citations[m]>(citations.size()-m)){
                r=m-1;
                
                maxV = max(maxV, min(citations[m], n-m));
            }
            else return citations[m];
        }
        return maxV;
    }
};