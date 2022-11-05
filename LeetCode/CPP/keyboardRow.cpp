class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a = "qwertyuiop";
        string b = "asdfghjkl";
        string c = "zxcvbnm";
        unordered_map <char,int> mp;
        vector<string> out;
        
        for (auto &c : a){
            mp[c] = 1;
            mp[c - 32] = 1;
        }
        
        for (auto &c : b){
            mp[c] = 2;
            mp[c - 32] = 2;
        }
        
        for (auto &ch : c){
            mp[ch] = 3;
            mp[ch - 32] = 3;
        }
        
        
        for(auto &str : words){
            bool flag = true;
            for(auto &c : str){
                if(mp[c] != mp[str[0]]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                out.push_back(str);
        }
        return out;
    }
};