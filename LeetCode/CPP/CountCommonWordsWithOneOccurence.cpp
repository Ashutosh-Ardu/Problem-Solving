class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map <string,int> mp;
        int cnt = 0;
        
        for(auto &str : words1){
            mp[str] += 1;
        }
        
        for(auto &str : words2){
            if(mp[str] < 2)
                mp[str]--;
        }
        
        for(auto &i : mp){
            if(i.second == 0)
                cnt++;
        }
        
        return cnt;
        // faster approach   
        // return count_if(begin(mp), end(mp), [](const auto &p){ return p.second == 0; });

    }
};