class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> out;
        int n = s.length();
        int m = 0;
        
        for(auto c : s){
            if(c == 'I'){
                out.push_back(m++);
            }else{
                out.push_back(n--);
            }
        }
        
        out.push_back(m);
        return out;
    }
};