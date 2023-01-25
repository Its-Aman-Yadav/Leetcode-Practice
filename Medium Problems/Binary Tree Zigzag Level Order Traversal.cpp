//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool chk=0;
        while (!q.empty()){
            int size= q.size();
            vector<int> temp;
            for (int i=0; i<size; i++){
                TreeNode* ele= q.front();
                q.pop();
                temp.push_back(ele->val);
                if (ele->left)  q.push(ele->left);
                if (ele->right) q.push(ele->right);
            }
          
            if (chk){
              reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            chk= !chk;
        }
        return ans;
    }
};
