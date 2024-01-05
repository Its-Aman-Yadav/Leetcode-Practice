//https://leetcode.com/problems/longest-increasing-subsequence/description/?envType=daily-question&envId=2024-01-05

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()) return 0;

        int n = nums.size();
        vector<int> dp(n, 1);

        for(int i=0; i<n; i++){
          for(int j=0; j<i; j++){
            if(nums[i] > nums[j]){
              dp[i] = max(dp[i], dp[j]+1);
            }
          }
        }

       return *max_element(dp.begin(), dp.end());
    }
};
