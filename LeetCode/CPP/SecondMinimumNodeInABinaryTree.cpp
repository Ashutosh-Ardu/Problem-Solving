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
    
    set<int> ar;
    
    void solve(TreeNode *root){
        if(root){
            solve(root->left);
            ar.insert(root->val);
            solve(root->right);
        }
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL || root->left == NULL)
            return -1;
        solve(root);
        if(ar.size() == 1)
            return -1;
        
        auto it = ar.begin();
        it++;
        return *it;
    }
};

// more effective solution
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
// class Solution {
// public:
    
//     set<int> ar;
    
//     void solve(TreeNode *root){
//         if(root){
//             solve(root->left);
//             ar.insert(root->val);
//             solve(root->right);
//         }
//     }
    
//     int findSecondMinimumValue(TreeNode* root) {
//         if(root == NULL || root->left == NULL)
//             return -1;
//         solve(root);
//         if(ar.size() == 1)
//             return -1;
        
//         auto it = ar.begin();
//         it++;
//         return *it;
//     }
// };

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
    
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL) return -1;
        if(root->left == NULL) return -1;
        
        int left = root->left->val;
        int right = root->right->val;
        
        if(root->left->val == root->val){
            left = findSecondMinimumValue(root->left);
        }
        if(root->right->val == root->val){
            right = findSecondMinimumValue(root->right);
        }
        
        if(left != -1 && right != -1){
            return min(left,right);
        }
        else if(left != -1) return left;
        else return right;
    }
};