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
    
    void preorder(TreeNode *root,vector<int> &ar){
        if(root){
            ar.push_back(root->val);
            preorder(root->left,ar);
            preorder(root->right,ar);
        }
        else
            ar.push_back(NULL);
    }
    
    void neworder(TreeNode *root,vector<int> &ar){
        if(root){
            ar.push_back(root->val);
            neworder(root->right,ar);
            neworder(root->left,ar);
        }
        else
            ar.push_back(NULL);
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int> ar;
        vector<int> ar2;
        
        preorder(root->left,ar);
        neworder(root->right,ar2);
        
        if(ar.size() != ar2.size())
            return false;
        
        for(int i=0;i<ar.size();i++){
            if(ar[i] != ar2[i])
                return false;
        }
        return true;
    }
};