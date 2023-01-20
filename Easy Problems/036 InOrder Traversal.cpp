//https://leetcode.com/problems/binary-tree-inorder-traversal/description/

vector<int> vec;
void order(TreeNode* root){
     if(!root)
        return;
     order(root->left);
     vec.push_back(root->val);
     order(root->right);
}


vector<int> inorderTraversal(TreeNode* root){
       order(root);
       return vec;

}
};
