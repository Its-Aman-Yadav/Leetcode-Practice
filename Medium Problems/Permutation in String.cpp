//https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_len=s1.size();
        int s2_len=s2.size();
        if(s1_len>s2_len)
        {
            return false;
        }
       sort(s1.begin(),s1.end());
        for(int i=0;i<=(s2_len-s1_len);i++)
        {
            string wd=s2.substr(i,s1_len);
            sort(wd.begin(),wd.end());
            if(wd==s1)
            {
                return true;
            }
        }
        return false;
    }
};
