class Solution {
public:
    string sortString(string s) {
        int count = s.length();
        string out;
        map<char,int> mp;
        
        for(auto c : s){
            mp[c] += 1;
        }
        
        while(count > 0){
            for(auto it=mp.begin();it!=mp.end();it++){
                if(it->second > 0){
                    out += it->first; 
                    it->second -= 1;
                    count--;
                }
            }
            
            for(auto it = mp.rbegin();it!=mp.rend();it++){
                // cout << it->first << "-" << it->second << "\n";
                if(it->second > 0){
                    out += it->first;
                    it->second -= 1;
                    count--;
                }
            }
        }
        return out;
    }
};