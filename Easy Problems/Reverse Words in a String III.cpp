//https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0;
        int j = 0;
        while(j<n){
           if(s[j] == ' '){
               reverse(s.begin() + i, s.begin() + j);
               i=j+1;
           }
           if(j == n-1) reverse(s.begin()+i,s.begin()+n);
           j++;
        }
        return s;
    }
};
