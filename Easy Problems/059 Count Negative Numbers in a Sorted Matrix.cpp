//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] < 0) {
                    count++;
                }
            }
        }

        return count;
    }
};
