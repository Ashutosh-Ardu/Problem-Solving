// link : https://www.youtube.com/watch?v=xsqUgiqRkSI

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue <int> out;
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                out.push(matrix[i][j]);
                if(out.size() > k)
                    out.pop();
            }
        }
        
        // cout<<out.top()<<"\n";
        return out.top();
    }
};