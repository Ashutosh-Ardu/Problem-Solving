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

// every subarray's center element needs to be pushed at left/right
// child respectively

class Solution {
public:
        
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 0)
            return NULL;
        else if(n == 1)
            return new TreeNode(nums[0]);
        
        TreeNode *root = new TreeNode(nums[n/2]);
        
        int mid = n/2;
        
        vector<int> left (nums.begin(),nums.begin()+mid);
        vector<int> right (nums.begin()+mid+1,nums.end());
        
        root -> left = sortedArrayToBST(left);
        root -> right = sortedArrayToBST(right);
        
        return root;
    }
};