class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string,int> mp;
        string out;
        
        for(auto p : paths){
            mp[p[0]] += 1;
            mp[p[1]] += 2;
        }
        
        for(auto i : mp){
            if(i.second == 2){
                out = i.first;
                break;
            }
        }
        return out;
    }
};