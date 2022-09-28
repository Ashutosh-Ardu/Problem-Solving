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
    
    TreeNode * ans = NULL;
    
    void preorder(TreeNode *root,int val){
        if(root){
            if(root->val == val){
                ans = root;
                return;
            }
            preorder(root->left,val);
            preorder(root->right,val);
        }
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        preorder(root,val);
        return ans;
    }
};