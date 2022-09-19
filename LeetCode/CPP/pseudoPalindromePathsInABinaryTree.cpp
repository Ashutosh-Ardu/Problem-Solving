// explaination : https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/discuss/2573851/Short-oror-C%2B%2B-oror-Java-oror-PYTHON-oror-Explained-Solution-oror-Beginner-Friendly-oror-BY-MR-CODER

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
    
    void solve(TreeNode *root,unordered_map<int,int> &ar,int &ans){
        if(root == nullptr)
            return;
        ar[root->val]++;
        
        if(!(root->left) && !(root->right)){
            int temp = 0;
            
            for(int i=1;i<=9;i++){
                if(ar[i] % 2 != 0)
                    temp++;
            }
            
            if(temp <= 1)
                ans++;
        }
        solve(root->left,ar,ans);
        solve(root->right,ar,ans);
        ar[root->val]--;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map <int,int> ar;
        int ans = 0;
        solve(root,ar,ans);
        return ans;
    }
};