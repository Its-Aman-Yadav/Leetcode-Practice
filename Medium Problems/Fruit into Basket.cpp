//https://leetcode.com/problems/fruit-into-baskets/description/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> fruit_count;

        int i=0,j=0,ans=0;
        while (i<fruits.size())
        {
            fruit_count[fruits[i]]++;

            while (fruit_count.size()>2)
            {
                fruit_count[fruits[j]]--;

                if (fruit_count[fruits[j]]==0) {
                    fruit_count.erase(fruits[j]);
                }
                j++;
            }

            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
