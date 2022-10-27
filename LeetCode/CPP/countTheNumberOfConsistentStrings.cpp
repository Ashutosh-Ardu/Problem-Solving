class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool count[26] = {};
        int cnt = words.size();
        
        for(auto c : allowed)
            count[c - 97] = true;
        
        for(int i=0;i<words.size();i++){
            for(auto c : words[i]){
                if(!(count[c - 97])){
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};