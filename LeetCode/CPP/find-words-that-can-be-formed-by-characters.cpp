class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> v1(26,0);
        int res = 0;
        
        for(auto &c : chars)
            v1[c - 'a']++;
        
        for(auto &str : words){
            res += str.size();
            vector<int> v2(26,0);
            
            for(auto &c : str)
                v2[c - 'a']++;
            
            for(int i=0;i<26;i++){
                if(v1[i] < v2[i]){
                    res -= str.length();
                    break;
                }        
            }
        }
        
        return res;
    }
};