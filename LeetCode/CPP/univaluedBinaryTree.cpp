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
    
    bool CheckUniVal(TreeNode *root,int val){
        if(root){
            if(root->val != val)
                return false;
            return (CheckUniVal(root->left,val) && CheckUniVal(root->right,val));
        }
        return true;
    }
    
    bool isUnivalTree(TreeNode* root,int val=0) {
        return CheckUniVal(root,root->val);
    }
};