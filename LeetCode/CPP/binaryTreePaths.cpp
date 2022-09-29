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
    
    void preorder(TreeNode *root,vector<string> &ar,string str){
        if(root){
            str += to_string(root->val);
            if(!(root->left) && !(root->right)){
                ar.push_back(str);
            }
            else{
                str += "->";
                preorder(root->left,ar,str);
                preorder(root->right,ar,str);
            }
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str = "";
        preorder(root,ans,str);
        return ans;
    }
};