class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        char out;
        
        for(auto c : s){
            mp[c] += 1;
            if(mp[c] == 2){
                out = c;
                break;
            }
        }
        return out;
    }
};