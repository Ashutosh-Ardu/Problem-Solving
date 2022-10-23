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
    
    int sum = 0;
    int d = 0;
    
    void traverse(TreeNode *root,int depth){
        if(root){
            if(depth > d){
                d = depth;
                sum = root->val;
            }
            else if(depth == d)
                sum += root->val;
            traverse(root->left,depth+1);
            traverse(root->right,depth+1);
        }
    }
    
    int deepestLeavesSum(TreeNode* root) {
        traverse(root,1);
        return sum;
    }
};