//https://leetcode.com/problems/jump-game-ii/description/

class Solution {
public:
    int jump(vector<int>& nums) {
        int reachfar=0;
        int jumps=0;
        int current=0;
        if(nums.size()==1){
            return 0;
        }
       
      
      for(int i=0;i<nums.size();i++){
            reachfar=max(reachfar,i+nums[i]);
            if(current>=nums.size()-1){
                break;
            }
        
            if(i==current){
              current=reachfar;
                jumps++;
            }
            
        }
        return jumps;
    }
};
