//https://leetcode.com/problems/first-bad-version/description/

class Solution {
public:
    int firstBadVersion(int n) {
        int left=0; 
        int right = n;
        int ans=0;

        while(left<=right){
          long long mid = left + (right-left)/2;
          if(isBadVersion(mid)==true){
            right = mid-1;
            ans = mid;
          }

          else left = mid+1;
        }
      return ans;
    }
};
