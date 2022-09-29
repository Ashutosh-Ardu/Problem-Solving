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
    
    void inorder(TreeNode *root,string &ar){
        ar += to_string(root->val);
        if(root->left){
            ar += '(';
            inorder(root->left,ar);
            ar += ')';
        }
        if(root->right){
            if(!root->left)
                ar += "()";
            ar += '(';
            inorder(root->right,ar);
            ar += ')';
        }
    }
    
    string tree2str(TreeNode* root) {
        if(root == NULL)
            return "";
        string ans;
        inorder(root,ans);
        return ans;
    }
};