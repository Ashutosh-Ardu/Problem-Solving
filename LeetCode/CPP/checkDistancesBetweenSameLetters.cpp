class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int d[26] = {0};
        
        for(int i = 0;i < s.length();i++){
             d[s[i] - 'a'] = i - d[s[i] - 'a'];
        }
        
        for(auto &c : s){
            if(d[c - 'a'] - 1 != distance[c - 'a']){
                return false;
            }
        }
        return true;
    }
};