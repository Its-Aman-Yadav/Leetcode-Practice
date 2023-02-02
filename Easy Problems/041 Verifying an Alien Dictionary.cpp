//https://leetcode.com/problems/verifying-an-alien-dictionary/

class Solution {
public:
    bool wordCompare(vector<int>&mp, string& word1, string& word2) 
    {
        int i = 0, j = 0;
        while(i < word1.size() && j < word2.size())
        {
            int pos1 = mp[word1[i] - 'a'];
            int pos2 = mp[word2[j] - 'a'];
            if (pos1 < pos2) return true;
            else if (pos2 < pos1) return false;  

            i++; 
            j++;   
        }

        return (word1.size() <= word2.size());
    }
    bool isAlienSorted(vector<string>& words, string order) 
    {
        vector<int>mp(26);
        for (int i = 0; i < order.size(); i++) mp[order[i] - 'a'] = i; 
        
        for (int i = 0; i < words.size() - 1; i++)
        {
            if (!wordCompare(mp, words[i], words[i + 1])) 
                return false;
        }
        return true;
        
    }
};
