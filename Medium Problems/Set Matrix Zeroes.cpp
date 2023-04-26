//https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,bool> m1;
        map<int,bool> m2;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    m1[i]=true;
                    m2[j]=true;
                }
            }
        }
        for(auto it:m1)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[it.first][j]=0;
            }
        }
        for(auto it:m2)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix[j][it.first]=0;
            }
        }
    }
};
