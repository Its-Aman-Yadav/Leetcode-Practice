//https://leetcode.com/problems/number-of-enclaves/

class Solution {
public:
    
  int dfs(int i,int j,vector<vector<int>>&grid,int n,int m,int&f){
          
          if(i ==0 || j == 0 || i == n-1 || j== m-1){
              f=1;
              //we can reach to the bounday so we will mark it 
              //and will not add no of nodes to our answer
          }

          //changing current cell to 0, so that I don't visit again
           grid[i][j] = 0;
           int c = 0;
          //we can move in four directions
            //going UP
            if((i-1)>=0){
                if(grid[i-1][j] == 1){
                    //go there
                    //we make it water
                    grid[i-1][j] = 0;
                    c += dfs(i-1,j,grid,n,m,f);
                }
            }
            
            //going DOWN
            if((i+1)<n){
                if(grid[i+1][j] == 1){
                    //go there
                    //we make it water
                    grid[i+1][j] = 0;
                    c += dfs(i+1,j,grid,n,m,f);
                }
            }

            //going LEFT
            if((j-1)>=0){
                if(grid[i][j-1] == 1){
                    //go there
                    //we make it water
                    grid[i][j-1] = 0;
                    c += dfs(i,j-1,grid,n,m,f);
                }
            }
            
            //going RIGHT
            if((j+1)<m){
                if(grid[i][j+1] == 1){
                    //go there
                    //we make it water
                    grid[i][j+1] = 0;
                    c += dfs(i,j+1,grid,n,m,f);
                }
            }
            
            //c is count of connected land cell + 1 for inculuding current cell
            return c+1;
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int ans = 0;

        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j] == 1){
                    int f = 0;
                    int count = dfs(i,j,grid,n,m,f);

                    if(f){
                        //we can reach to the boundary so no 
                        //need to add count to answer
                        continue;
                    }
                    ans += count;
                }
            }
        }
        return ans;
    }
};
