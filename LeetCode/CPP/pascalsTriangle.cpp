class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out;
        
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<i+1;j++){
                if(j == 0 || j == i)
                    temp.push_back(1);
                else
                    temp.push_back(out[i-1][j]+out[i-1][j-1]);
            }
            out.push_back(temp);
        }
        
        return out;
    }
};