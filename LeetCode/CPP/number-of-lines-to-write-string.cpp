class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> res;
        int lines = 1;
        int cur = 0;
        
        for(auto &ch : s){
            if(cur + widths[ch - 'a'] <= 100){
                cur += widths[ch - 'a'];
            }else{
                lines++;
                cur = 0;
                cur += widths[ch - 'a'];
            }
        }
        
        res.push_back(lines);
        res.push_back(cur);
        return res;
    }
};

// clean code
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int res = 1, cur = 0;
        for (auto &c : s) {
            int width = widths[c - 'a'];
            res = cur + width > 100 ? res + 1 : res;
            cur = cur + width > 100 ? width : cur + width;
        }
        return {res, cur};
    }
};
