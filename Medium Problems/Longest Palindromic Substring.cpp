//https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    string longestPalindrome(string s) {
        
        string ans="";
        int start=0;
        int end=0;
        int len=0;
        int n=s.size();

        for(int i=1;i<n;i++)
        {
            // for odd
            int st=i-1;
            int en=i+1;
            while(st>=0 && en<n && s[st]==s[en])
            {
                if(en-st+1>len)
                {
                    len=en-st+1;
                    start=st;
                    end=en;
                }
                st--;
                en++;
            }

            // for even
            st=i-1;
            en=i;
            while(st>=0 && en<n && s[st]==s[en])
            {
                if(en-st+1>len)
                {
                    len=en-st+1;
                    start=st;
                    end=en;
                }
                st--;
                en++;
            }
        }

        for(int i=start;i<=end;i++)
        {
            ans+=s[i];
        }

        return ans;
    }
};
