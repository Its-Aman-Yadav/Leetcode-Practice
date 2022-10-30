
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int answer=1;
	for(int i=1; i<nums.size(); i++)        
		if(nums[i]!=nums[i-1])           //cause array is sorted
            nums[answer++] = nums[i];     
	return answer;
    }
};
