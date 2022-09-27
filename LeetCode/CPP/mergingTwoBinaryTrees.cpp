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
    
    void merge(TreeNode* &root1,TreeNode* &root2){
        if(root1 && root2){
            root1->val += root2->val;
            merge(root1->left,root2->left);
            merge(root1->right,root2->right);
        }
        else if(root2){
            root1 = new TreeNode(root2->val);
            merge(root1->left,root2->left);
            merge(root1->right,root2->right);
        }
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        merge(root1,root2);
        return root1;
    }
};