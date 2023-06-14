//https://leetcode.com/problems/minimum-absolute-difference-in-bst/

class Solution {
public:
vector<int>v;

  void inorder(TreeNode* root){

      if(root == NULL)
       return ;

      inorder(root->left);
      v.push_back(root->val);
      inorder(root->right); 

  }
    int getMinimumDifference(TreeNode* root) {
        
         inorder(root);

        int ans=INT_MAX;
       for(int i=1;i<v.size();i++) 
        ans= min(ans,v[i]-v[i-1]);

        return ans;
    }
};
