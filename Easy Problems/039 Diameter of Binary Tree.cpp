//https://leetcode.com/problems/diameter-of-binary-tree/description/

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int ans = max(height(root->left),height(root->right)) +1;
        return ans;
    }
   
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int sum_of_height= height(root->left) + height(root->right);

        int ans  = max(sum_of_height,max(left,right));
        return ans;
    }
};
