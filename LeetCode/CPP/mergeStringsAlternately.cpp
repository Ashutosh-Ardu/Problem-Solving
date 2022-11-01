class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length(),m = word2.length();
        int i = 0,j = 0,k = 0;
        string out;
        
        while(i < n && j < m){
            if(k++ % 2 == 0)
                out += word1[i++];
            else
                out += word2[j++];
        }
        
        if(i == n){
            while(j < m)
                out += word2[j++];
        }else {
            while(i < n)
                out += word1[i++];
        }
        
        return out;
    }
};