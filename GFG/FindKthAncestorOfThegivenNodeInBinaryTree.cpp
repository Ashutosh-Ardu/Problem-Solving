// gfg link: https://www.geeksforgeeks.org/problems/kth-common-ancestor-in-bst/1
/*
Given a BST with n (n>=2) nodes, find the kth common ancestor of nodes x and y in the given tree. Return -1 if kth ancestor does not exist. Nodes x and y will always be present in the input of a BST, and x != y.
*/
class Solution
{
    public:
    
    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        vector<int> res;
        int mn = min(x,y);
        int mx = max(x,y);
        
        while(root){
            if(root->data < mn){
                res.push_back(root->data);
                root = root->right;
            }
            else if(root->data > mx){
                res.push_back(root->data);
                root = root->left;
            }
            else{
                res.push_back(root->data);
                if(k > res.size()) return -1;
                return res[res.size()-k];
            }
        }
        return -1;
    }
};