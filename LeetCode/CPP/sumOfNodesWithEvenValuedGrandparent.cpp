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
    
    void traverse(TreeNode *root,int prev,int gprev){
        if(root){
            if(gprev % 2 == 0){
                // cout <
                sum += root->val;
            }
            traverse(root->left,root->val,prev);
            traverse(root->right,root->val,prev);
        }
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        traverse(root,-1,-1);
        return sum;
    }
};