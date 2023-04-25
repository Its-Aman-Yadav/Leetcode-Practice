//https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
           sum += nums[i];
           if(sum>maxi) maxi = sum;

           if(sum<0) sum = 0;
        }
      return maxi;
    }
};
