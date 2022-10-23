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
    
    int count = 0;
    
    int countNodes(TreeNode *root){
        if(!root)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    int findSum(TreeNode *root){
        if(!root)
            return 0;
        return (findSum(root->left) + findSum(root->right) + root->val);
    }
    
    int averageOfSubtree(TreeNode* root) {
        if(!root)
            return 0;
        if(root->val == findSum(root) / countNodes(root) )
            count++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return count;
    }
};