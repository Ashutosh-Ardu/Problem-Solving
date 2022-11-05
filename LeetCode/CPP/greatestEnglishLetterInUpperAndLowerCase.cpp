class Solution {
public:
    string greatestLetter(string s) {
        string out;
        char cur = ' ';
        unordered_map <char,int> mp;
        for(auto &c : s){
            mp[c] = 1;
        }
        
        for(auto &c : s){
            if(c > 96 && mp[c - 32] == 1){
                if(c - 32 > cur)
                    cur = c - 32;
            }
            else if(mp[c + 32] == 1){
                if(c > cur)
                    cur = c;
            } 
        }
        
        if(cur != ' ')
            out += cur;
        return out;
    }
};