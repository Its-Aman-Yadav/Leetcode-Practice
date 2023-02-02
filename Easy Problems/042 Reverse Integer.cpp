//https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        long long num=0;
        while(x!=0){
            num=num*10+x%10;
            x/=10;
        }
        if(num>INT_MAX || num<INT_MIN) return 0;
        return num;
    }
};
