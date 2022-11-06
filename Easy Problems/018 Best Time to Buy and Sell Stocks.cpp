//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0; i<prices.size(); i++){
            mini=min(mini, prices[i]);
            maxi=max(maxi, prices[i]-mini);
        }
        
        return maxi;
    }
};
