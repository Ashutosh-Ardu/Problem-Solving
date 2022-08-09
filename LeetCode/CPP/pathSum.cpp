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
    
    bool addDepth(TreeNode *root,int total,int target){
        if(!root)
            return false;
        if(!(root->left) && !(root->right) && root->val + total == target)
            return true;
        total += root->val;
        return (addDepth(root->left,total,target) || addDepth(root->right,total,target));
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        return addDepth(root,0,targetSum);
    }
};