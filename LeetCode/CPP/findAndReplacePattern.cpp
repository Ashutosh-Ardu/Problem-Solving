class Solution {
public:
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string> out;
        
        for(int i=0;i<words.size();i++){
            unordered_map <char,int> p;
            unordered_map <char,int> ar;
            bool flag = true;
            
            for(int j=0;j<pattern.size();j++){
                if(p[words[i][j]] != ar[pattern[j]]){
                    flag = false;
                    break;
                }
                else{
                    p[words[i][j]] = j+1;//key moment
                    ar[pattern[j]] = j+1;// key moment
                }
            }
            
            if(flag)
                out.push_back(words[i]);
            
        }
        return out;
    }
};