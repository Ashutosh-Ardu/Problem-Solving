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
    
    void preorder(TreeNode *p,vector<int> &ar){
        if(p){
            ar.push_back(p->val);
            preorder(p->left,ar);
            preorder(p->right,ar);
        }
        else
            ar.push_back(NULL);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ar;
        vector<int> ar2;
        
        preorder(p,ar);
        preorder(q,ar2);
        
        if(ar.size() != ar2.size())
            return false;
        
        for(int i=0;i<ar.size();i++){
            if(ar[i] != ar2[i])
                return false;
        }
        return true;
    }
};