class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char,int> mp;
        
        for(auto c : s){
            mp[c] += 1;
        }
        
        
        int t = 0;
        for(auto i : mp){
            if(t == 0)
                t = i.second;
            if(i.second != t)
                return false;
        }
        return true;
    }
};