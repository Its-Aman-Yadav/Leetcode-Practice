//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int> elements;
    elements.insert(nums.begin(),nums.end());
    
        return nums.size() != elements.size();
        return false;
    }
};
