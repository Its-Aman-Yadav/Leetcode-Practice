//https://leetcode.com/problems/zigzag-conversion/description/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2) return s;
       int t[numRows][s.size()];
       memset(t,-1, sizeof(t));
        string ans;

        for(int i=0, changer=1, row=0; i<s.size(); i++){
            
            t[row][i]= s[i];
            if(row==numRows-1) changer =-1;
            if(row==0) changer=1;
            row= row+ changer;

        }

       for(int i=0; i<numRows; i++){
           for(int j=0; j<s.size();j++){
               if(t[i][j]!=-1)ans.push_back(t[i][j]);
           }
       }

    return ans;

    }
};

