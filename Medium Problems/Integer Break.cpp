//https://leetcode.com/problems/integer-break/description/?envType=daily-question&envId=2023-10-06

class Solution {
public:
    int integerBreak(int n) {                      //Greedy Algorithm 
        if (n<=3) return n-1;

        int result = 1;

        while(n>4){
          result *= 3;
          n -= 3;
        }

        result *= n;
        return result;

    }
};
