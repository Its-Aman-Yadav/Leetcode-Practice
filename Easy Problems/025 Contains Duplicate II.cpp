//https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> Map;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(Map.count(nums[i]))
            {
                if(abs(i-Map[nums[i]])<=k)
                    return true;
            }
         Map[nums[i]] = i;
        }
        return false;
    }
};
