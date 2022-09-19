// explaination : https://leetcode.com/problems/utf-8-validation/discuss/2569562/Short-oror-C%2B%2B-oror-Java-oror-PYTHON-oror-Explained-Solution-oror-Beginner-Friendly-oror-BY-MR-CODER

class Solution {
public:
    
    bool validUtf8(vector<int>& data) {
        int count = 0;
        int n = data.size();
        
        for(int i=0;i<n;i++){
            int temp = data[i];
            if(!count){
                if((temp >> 5) == 0b110)
                    count = 1;
                else if((temp >> 4) == 0b1110)
                    count = 2;
                else if((temp >> 3) == 0b11110)
                    count = 3;
                else if((temp >> 7) == 1)
                    return false;
            }
            else{
                if((temp >> 6) != 0b10)
                    return false;
                count--;
            }
        }
        return (count == 0);
    }
};