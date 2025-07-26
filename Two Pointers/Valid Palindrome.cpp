//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
    for(auto& x : s){
                x=tolower(x);
        }
        for(int i = 0 ; i < s.size() ;){
            char x = s[i];
            if((x-'a') > 25 || (x-'a') < 0 || x==' '){
                //cout << s << endl;
                if((x-'0')>=0 && (x-'0')<10)i++;
                else s.erase(i,1);
            }else i++;
        }

    int n = s.size();
    int l = 0, r = n-1;
    bool flag = true;
    while(r > l){
        if(s[r]!=s[l]){
            flag = false;
            break;
        }
        r--;
        l++;
    }
        return flag;
    }
};