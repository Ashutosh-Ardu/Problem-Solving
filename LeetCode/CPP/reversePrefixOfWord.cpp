class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.find(ch);
        
        if(ind == -1)
            return word;
        
        string t = word.substr(0,ind+1);
        reverse(t.begin(),t.end());
        
        // if(ind < word.length() - 1)
            return t + word.substr(ind+1,word.length());
        // else
        //     return t;
    }
};