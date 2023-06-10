//https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j = height.size()-1;
        int ans=0;
        while(i<j){
          if(height[i]>height[j]){
            ans = max(ans, (j-i)*height[j]);
            j--;
          }

          else{
            ans = max(ans, (j-i)*height[i]);
            i++;
          }
        }
      return ans;
    }
};
