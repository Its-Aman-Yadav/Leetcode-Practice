//https://leetcode.com/problems/valid-sudoku/description/

class Solution {
    #define DPSolver ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
public:
    bool checkSubThree (vector<vector<char>>& board, int row, int col){
        vector<bool> vis(10); 
        for(int i = row; i < row + 3; i ++){
            for(int j = col; j < col + 3; j++){
                if(board[i][j]!='.'){
                    if(!vis[board[i][j] - '1'])
                        vis[board[i][j] - '1'] = true; 
                    else 
                        return false; 
                }
            }
        }
        return true; 
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        DPSolver;
        int n = 9;
    for (int i = 0; i < n; i++)
    {
        vector<bool> row(9, false);
        vector<bool> col(9, false);
    
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                if (row[board[i][j] - '1'])
                    return false;
                
                else
                    row[board[i][j] - '1'] = true;
            }
            if (board[j][i] != '.')
            {
                if (col[board[j][i] - '1'])
                    return false;
                
                else
                    col[board[j][i] - '1'] = true;
            }
        }
    }
    for(int i = 0 ; i < 9; i+=3)
        for(int j = 0; j < 9; j+=3)
            if(!checkSubThree(board, i,j))
                return false;

    return true;
    }
};
