class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string,int> mp;
        string w;
        for(auto &c : s1){
            if(c == ' '){
                mp[w]++;
                w = "";
            }
            else
                w += c;
        }
        
        mp[w]++;
        w = "";
        
        for(auto &c : s2){
            if(c == ' '){
                mp[w]++;
                w = "";
            }    
            else
                w += c;
        }
        mp[w]++;
        
        vector<string> res;
        for(auto &i : mp)
            if(i.second == 1)
                res.push_back(i.first);
        return res;
    }
};

// faster solution
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string,int> mp;
        istringstream ss1(s1);
        istringstream ss2(s2);
        string w;
        
        while(ss1 >> w){
            mp[w]++;
        }
        
        while(ss2 >> w){
            mp[w]++;
        }
        
        vector<string> res;
        for(auto &i : mp)
            if(i.second == 1)
                res.push_back(i.first);
        return res;
    }
};