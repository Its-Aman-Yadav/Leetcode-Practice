//https://leetcode.com/problems/range-sum-of-bst/description/?envType=daily-question&envId=2024-01-08'

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) {
            return 0;
        }
        
        int currentVal = (root->val >= low && root->val <= high) ? root->val : 0;
        
        int leftSum = rangeSumBST(root->left, low, high);
        int rightSum = rangeSumBST(root->right, low, high);
        
        return currentVal + leftSum + rightSum;
    }
};
