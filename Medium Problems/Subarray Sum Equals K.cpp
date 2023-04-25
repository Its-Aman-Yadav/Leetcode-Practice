//https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        
        int sum = 0, result = 0;
        map[sum] = 1;
        
        for (int n : nums) {
            sum += n;
            result += map[sum - k];
            map[sum]++;
        }
        
        return result;
    }
};
