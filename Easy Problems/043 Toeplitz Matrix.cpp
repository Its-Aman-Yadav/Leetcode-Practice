//https://leetcode.com/problems/toeplitz-matrix/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row-1; i++){
            for(int j = 0; j < col-1; j++){
                if(matrix[i][j] != matrix[i+1][j+1])
                    return false;
            }
        }
        
        return true;
        
    }
};
