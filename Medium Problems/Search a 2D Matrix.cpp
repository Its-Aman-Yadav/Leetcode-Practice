//https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();  
        int m=matrix[0].size(); 
        int st=0;
        int end=(n*m)-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(matrix[mid / matrix[0].size()][mid % matrix[0].size() ]== target){
            return true;
            }
             if(matrix[mid/matrix[0].size()][mid%matrix[0].size() ]< target){st=mid+1;}
            else {
              end=mid-1;
            }
        }
        return false;
    }
};
