class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> out;
        int prev = -s.length();
        
        for(int i=0;i<s.length();i++){
            if(s[i] == c)
                prev = i;
            out.push_back(i - prev);
        }
        
        for(int i=prev;i>=0;i--){
            if(s[i] == c)
                prev = i;
            out[i] = min((prev-i),out[i]);
        }
        
        return out;
    }
};