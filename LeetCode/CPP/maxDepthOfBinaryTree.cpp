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

// my solution
class Solution {
public:
    
    int findDepth(TreeNode *root){
        if(!(root))
            return 0;
        else{
            int left = findDepth(root->left);
            int right = findDepth(root->right);
            
            if(left < right)
                return right + 1;
            else 
                return left  + 1;
        }
    }
    
    int maxDepth(TreeNode* root) {
        return findDepth(root);
    }
};

// other solution (concise form)
class Solution2{
    public:
        int maxDepth(TreeNode* root){
            if (root == nullptr) return 0;
            return max(maxDepth(root->left), maxDepth(root->right)) + 1;
        }
};

// most efficient solution
class Solution3{
    public:
        int maxDepth(TreeNode* root) {
        count++;
        if(root == NULL){
            count--;
            max = (max < count) ? count : max;
            return 0;
        }
        maxDepth(root->left);
        maxDepth(root->right);
        count--;
        return max;
    }
    
    int count = 0;
    int max = 0;
    
};