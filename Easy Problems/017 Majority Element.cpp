//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
		
        int count = 1;
        int size = nums.size();
		
        if(size == 1 || size == 2){
            return nums[0];
        }
		
        for(int i = 0; i < size; i++){
           if(nums[i] == nums[i+1]){
               count++;
           }else{
			   
               if(count > (size/2)){
                   return nums[i];
               }
               count = 1;
           }
        }
        
        return -1;
    }
};
