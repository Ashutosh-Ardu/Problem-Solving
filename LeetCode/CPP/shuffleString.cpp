class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       map<int,char> mp;
        
        for(int i=0;i<s.length();i++){
            mp.insert({indices[i],s[i]});
        }
        
        string out = "";
        
        for(int i=0;i<s.length();i++){
            out += mp[i];
        }
        return out;
    }
};