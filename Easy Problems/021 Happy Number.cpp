//https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        int ans=n;
        while(true){
            int temp=0;
            while(ans){
                temp+=pow(ans%10,2);
                ans/=10;
            }
            ans=temp;
            if(ans==1) return true;
            if(us.count(ans))
                return false;
            us.insert(ans);
        }
    }
};
