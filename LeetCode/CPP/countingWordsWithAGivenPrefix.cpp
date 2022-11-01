class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int cnt = 0;
        
        for(auto c : words){
            string t = c.substr(0,n);
            if(t == pref)
                cnt++;
        }
        return cnt;
    }
};