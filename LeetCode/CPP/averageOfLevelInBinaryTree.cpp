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
    
    int height(TreeNode *root){
        if(!root) return 0;
        
            int left = height(root->left);
            int right = height(root->right);
            
            if(left > right)
                return left + 1;
            return right + 1;
        
    }
    
    void scanLevel(TreeNode *root,int level,double &sum,int &k){
        if(!root) return;
        else if(level == 1){
            sum += root->val;
            k++;
        }
        else{
            scanLevel(root->left,level-1,sum,k);
            scanLevel(root->right,level-1,sum,k);
        }
    }
    
    
    vector<double> averageOfLevels(TreeNode* root) {
        int h = height(root);
        vector<double> ans;
        for(int i=0;i<=h;i++){
            double sum = 0;
            int k = 0;
            scanLevel(root,i,sum,k);
            if(k != 0)
                ans.push_back(sum/k);
        }
        return ans;
    }
};