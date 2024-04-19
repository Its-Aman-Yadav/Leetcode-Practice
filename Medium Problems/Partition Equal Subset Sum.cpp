//https://leetcode.com/problems/partition-equal-subset-sum/description/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<bool> dp(sum + 1, 0);
        if (sum&1) return false;
        dp[sum/2] = true;
        for (int i = 1; i < nums.size(); i++){
            for (int currsum = sum; currsum >= sum/2; currsum--){
                bool notTake = dp[currsum];
                bool take = false;
                if (currsum >= nums[i]) take = dp[currsum - nums[i]];
                dp[currsum] = notTake || take;
            }
        }
        return dp[sum];
    }
};
