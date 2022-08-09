class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> out(rowIndex+1,0);
        int back,cur;
        
        for(int i=0;i<=rowIndex;i++){
            out[i] = back = 1;
            for(int j=1;j<i;j++){
                cur = out[j];
                out[j] += back;
                back = cur;
            }
        }
        return out;
    }
};