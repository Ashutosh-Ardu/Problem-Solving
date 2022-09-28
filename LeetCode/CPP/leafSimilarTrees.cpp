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
    
    void leafExtractor(TreeNode *root,vector<int> &ar){
        if(root){
            if(!(root->left) && !(root->right))
                ar.push_back(root->val);
            leafExtractor(root->left,ar);
            leafExtractor(root->right,ar);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ar1;
        vector<int> ar2;
        
        leafExtractor(root1,ar1);
        leafExtractor(root2,ar2);
        
        auto it1 = ar1.begin();
        auto it2 = ar2.begin();
        
        if(ar1.size() != ar2.size())
            return false;
        
        for(;it1 != ar1.end();){
            if(*(it1) != *(it2))
                return false;
            it1++;
            it2++;
        }
        
        return true;
    }
};