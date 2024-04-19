//https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

class Solution {
public:
    bool checkEqual(vector<int> &m1, vector<int> &m2) {
        for(int i = 0; i < 26; i++) {
            if(m1[i] != m2[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> m1(26, 0), m2(26, 0);
        for(int i = 0; i < p.length(); i++) {
            m2[p[i] - 'a']++;
        }
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(j < s.length()) {
            m1[s[j]-'a']++;
            if(j-i+1 < p.length()) {
                j++;
            }
            else if(j-i+1 == p.length()) {
                if(checkEqual(m1, m2)) ans.push_back(i);
                m1[s[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
};
