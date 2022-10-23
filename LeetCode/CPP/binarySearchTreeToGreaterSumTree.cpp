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

// clue
// We can see that we just need to go right node 
// left during the traversal. We also need to keep 
// our sum variable and the sum gets updated from 
// right to left in the BST. So we just have to 
// write a simple traversal.

class Solution {
public:
    
    int sum = 0;
    
    void traverse(TreeNode *root){
        if(root){
            traverse(root->right);
            sum += root->val;
            root->val = sum;
            traverse(root->left);
        }
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        traverse(root);
        return root;
    }
};