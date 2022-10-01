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
    
    void inorder(TreeNode *root,vector<int> &ar){
        if(root){
            inorder(root->left,ar);
            ar.push_back(root->val);
            inorder(root->right,ar);
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        vector<int> ar;
        inorder(root,ar);
        
        int ans = 100000;
        for(int i=1;i<ar.size();i++){
            ans = min(ans,abs(ar[i]-ar[i-1]));
        }
        return ans;
    }
};