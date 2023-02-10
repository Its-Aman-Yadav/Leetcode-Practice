//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size(),j=0,ans=0,maxi=0;
      
      vector<int>mp(128,0);
        for(int i=0;i<n;i++){
            if(!mp[s[i]]++)
                maxi++;
                
            while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    
    }
};
