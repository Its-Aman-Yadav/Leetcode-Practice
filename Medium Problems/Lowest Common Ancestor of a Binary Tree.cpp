//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          
          if(root==NULL) return root;
          if(root==p || root==q ) return root;

          TreeNode* leftans = lowestCommonAncestor(root->left, p, q);

          TreeNode* rightans = lowestCommonAncestor(root->right, p, q);

          if(leftans==NULL) return rightans;
          else if(rightans==NULL) return leftans;

          else return root;


    }
};
