class Solution {
public:
    bool digitCount(string num) {
        unordered_map <char,int> mp;
        
        for(auto c : num)
            mp[c] += 1;
        
        for(int i =0;i < num.length();i++){
            if(mp[i + '0'] != num[i] - '0')
                return false;
        }
        return true;
    }
};