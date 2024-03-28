// https://leetcode.com/problems/subtree-of-another-tree/


class Solution {
public:
    bool check(TreeNode* p, TreeNode* q) {
        if (!p || !q) {
            return !p && !q;
        }
        return p->val == q->val && check(p->left, q->left) &&
               check(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root)
            return false;
        if (check(root, subRoot))
            return true;
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
