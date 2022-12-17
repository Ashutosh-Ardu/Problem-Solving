class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        for(int i=0;i<s.size();i+=k){
            // cout << s[i] << " ";
            if(i+k < s.size())
            res.push_back(s.substr(i,k));
            else 
                res.push_back(s.substr(i));
        }
        
        // cout << res.back().size() << " ";
        
        if(res.back().size() != k){
            while(res.back().size() != k)
                res.back() += fill;
        }
        
        return res;
    }
};