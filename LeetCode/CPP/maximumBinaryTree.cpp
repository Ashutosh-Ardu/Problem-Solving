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
    
    TreeNode* insert(vector<int> nums,int start,int end){
        if(start > end)
            return NULL;
        
        int min = 0,minVal = INT_MIN;
        for(int i=start;i<=end;i++){
            if(nums[i] > minVal)
                minVal = nums[i],min = i;
        }
        
        TreeNode *node = new TreeNode(minVal);
        node->left = insert(nums,start,min-1);
        node->right = insert(nums,min+1,end);
        return node;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return insert(nums,0,nums.size()-1);
    }
};