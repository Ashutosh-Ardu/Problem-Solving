class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string out;
        
        for(int i=0;i<words.size();i++){
            string t = words[i];
            reverse(t.begin(),t.end());
            if(words[i] == t){
                out += words[i];
                return out;
            }
        }
        
        return out;
    }
};