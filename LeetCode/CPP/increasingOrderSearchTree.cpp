// Question Link
// https://leetcode.com/problems/increasing-order-search-tree/submissions/

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
    
    TreeNode *ans = NULL;
    
    TreeNode* push(TreeNode *ans,int val){
        if(ans == NULL)
            ans = new TreeNode(val);
        else if(val < ans->val)
            ans->left = push(ans->left,val);
        else if(val > ans->val)
            ans->right = push(ans->right,val);
        return ans;
    }
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            ans = push(ans,root->val);
            inorder(root->right);
        }
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};