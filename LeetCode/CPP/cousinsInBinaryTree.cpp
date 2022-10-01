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
    
    map<int,int> parent;
    
    int findDepth(TreeNode* root, int x){
    // Base case
    if (root == NULL)
        return -1;
  
    // Initialize distance as -1
    int dist = -1;
  
    // Check if x is current node=
    if ((root->val == x)
  
        // Otherwise, check if x is
        // present in the left subtree
        || (dist = findDepth(root->left, x)) >= 0
  
        // Otherwise, check if x is
        // present in the right subtree
        || (dist = findDepth(root->right, x)) >= 0)
  
        // Return depth of the node
        return dist + 1;
  
    return dist;
    }
    
    
    void preorder(TreeNode *root,TreeNode *prev = NULL){
        if(root){
            if(prev){
                parent[root->val] = prev->val;
            }else{
                parent[root->val] = root->val;
            }
            preorder(root->left,root);
            preorder(root->right,root);
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        preorder(root);
        if(x == root->val || y == root->val)
            return false;

        return (findDepth(root,x) == findDepth(root,y) && parent[x] != parent[y]);
    }
};