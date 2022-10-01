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
    
    unordered_map<int,int> mp;
    int max = 0;
    
    void preorder(TreeNode *root){
        if(root){
            mp[root->val] += 1;
            
            if(mp[root->val] > max)
                max = mp[root->val];
            
            preorder(root->left);
            preorder(root->right);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> ar;
        
        preorder(root);
        
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second == max)
                ar.push_back(it->first);
        }
        return ar;
    }
};