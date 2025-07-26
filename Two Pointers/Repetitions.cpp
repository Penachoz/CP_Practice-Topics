//https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = 0, r = 0, maxlargo = 0;
    while(r < s.size()){
        if(s[l]!=s[r]){
            l=r;
        }
        else{
            r++;
        }
        maxlargo = max(maxlargo, r-l);
    }
    cout << maxlargo << endl;
}
