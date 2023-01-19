//https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL ) 
           return 0;
        int maxLeft = maxDepth(root->left);      //cause height is starting from 1
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
};
