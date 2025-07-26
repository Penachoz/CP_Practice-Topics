//https://cses.fi/problemset/task/1094/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n,0);
    for(auto& x : vec)cin >> x;
    long long l = 0, r = 1, ans = 0;
    while(r < n){
        if(vec[r] < vec[l]){
            ans+=vec[l]-vec[r];
            vec[r]=vec[l];
        }
        r++;
        l++;
    }
    cout << ans << endl;
}
