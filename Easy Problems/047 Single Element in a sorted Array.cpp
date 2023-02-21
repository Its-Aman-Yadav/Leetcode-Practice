//https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(auto i: nums){
          mp[i]++;
        }

        for(auto i: mp){
          if(i.second==1) return i.first;
        }
        return -1;

    }
};
