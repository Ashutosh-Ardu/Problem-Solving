class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> mp;
        
        for(auto &c : word1)
            mp[c]++;
        
        for(auto &c : word2)
            mp[c]--;
        
        for(auto &i : mp){
            if(i.second >3 or i.second <-3)
                return false;
        }
        return true;
    }
};