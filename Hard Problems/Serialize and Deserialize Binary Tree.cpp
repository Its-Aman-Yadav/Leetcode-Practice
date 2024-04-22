//https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/

class Codec {
public:
    string serialize(TreeNode* root) {
        ostringstream temp;
        ToString(root, temp);
        return temp.str();
    }

    TreeNode* deserialize(string data) {
        istringstream temp(data);
        return ToStructure(temp);
    }
    
private:
    void ToString(TreeNode* root, ostringstream& temp) {
        if (root == NULL) {
            temp << "N ";
            return;
        }
        temp << root->val << " ";
        ToString(root->left, temp);
        ToString(root->right, temp);
    }
    
    TreeNode* ToStructure(istringstream& temp) {
        string value = "";
        temp >> value;
        if (value == "N") {
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(value));
        root->left = ToStructure(temp);
        root->right = ToStructure(temp);
        return root;
    }
};
