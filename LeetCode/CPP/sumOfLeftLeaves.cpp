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
    
    TreeNode *parent = NULL;
    int sum = 0;
    
    void inorder(TreeNode *root){
        if(root){
            if(parent && root == parent->left && !(root->left) && !(root->right)){
                sum += root->val;
            }
            else{
                parent = root;
            inorder(root->left);
            inorder(root->right);
            }
        }
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        inorder(root);
        return sum;
    }
};