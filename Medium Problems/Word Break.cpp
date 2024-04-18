//https://leetcode.com/problems/word-break/description/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
		vector<bool> dp(n+1, false);
		dp[0] = true;

		for (int i = 0; i < n; i++) {
			if (dp[i]) {
				for (int j = 0; j < wordDict.size(); j++) {
					int wSize = wordDict[j].size();
					if (wSize + i <= n) {
						string compairS = s.substr(i, wSize);
						if (compairS == wordDict[j])
							dp[i+wSize] = true;
					}
				}
			}
		}
		
		return dp[n];
    }
};
