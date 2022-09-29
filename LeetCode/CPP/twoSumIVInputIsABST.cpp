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
    
    bool findIt(vector<int>& nums,int index,int value){
        for(int i=index+1;i<nums.size();i++){
            if(nums[i] == value)
                return true;
        }
        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> ar;
        inorder(root,ar);
        
        for(int i=0;i<ar.size()-1;i++){
            if(findIt(ar,i,k-ar[i]))
                return true;
        }
        return false;
    }
};