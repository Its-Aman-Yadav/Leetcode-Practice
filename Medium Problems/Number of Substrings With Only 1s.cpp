//https://leetcode.com/problems/number-of-substrings-with-only-1s/description/

class Solution {
public:
    int numSub(string s) {
        unsigned int result=0, streak=0;
        for(int i=0; i<s.size(); i++){
          if(s[i]=='1') result += ++streak;
        
          else streak=0;
        }
        return result%1000000007;
    }

};
