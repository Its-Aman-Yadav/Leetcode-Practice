//https://leetcode.com/problems/smallest-string-starting-from-leaf/description/?envType=daily-question&envId=2024-04-17

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        string ans;
        dfs(root, "", ans);
        return ans;
    }
    
    void dfs(TreeNode* root, string path, string& ans) {
        if (!root) return;
        
        path += char('a' + root->val);
        
        if (!root->left && !root->right) {
            reverse(path.begin(), path.end());
            if (ans.empty() || path < ans) {
                ans = path;
            }
            reverse(path.begin(), path.end());
        }
        
        dfs(root->left, path, ans);
        dfs(root->right, path, ans);
    }
};
