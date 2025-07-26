//https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int n = s.size();
        int l = 0, r = n - 1;
        while(r > l){
            temp = s[l];
            s[l]=s[r];
            s[r]=temp;
            r--;
            l++;
        }
    }
};