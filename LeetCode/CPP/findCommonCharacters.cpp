class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> cnt(26,101);
        vector<string> out;
        
        for(auto &str : words){
            vector<int> cnt1(26,0);
            for(auto &c : str)
                cnt1[c - 'a']++;
            
            for(int i=0;i<26;i++)
                cnt[i] = min(cnt[i],cnt1[i]);
        }
        
        for(int i=0;i<26;i++){
            for(int j=0;j<cnt[i];j++)
                out.push_back(string(1,(i+'a')));
        }
        
        return out;
    }
};