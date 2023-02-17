//https://leetcode.com/problems/minimum-distance-between-bst-nodes/description/

class Solution {
public:
    vector<int>Inorder;
    
    void inorder(TreeNode* root){
        if(!root)
            return;
        else{
            inorder(root->left);
            Inorder.push_back(root->val);
            inorder(root->right);
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        if(!root)
            return 0;
        inorder(root);
        int res = INT_MAX;
        for(auto i=1;i<Inorder.size();i++){
            res = min(res, Inorder[i]-Inorder[i-1]); }
        return res;
        
    }
};
