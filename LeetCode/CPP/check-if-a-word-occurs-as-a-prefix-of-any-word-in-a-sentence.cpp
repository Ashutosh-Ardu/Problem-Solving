class Solution {
public:
    int isPrefixOfWord(string s, string sw) {
        istringstream ss(s);
        string cur;
        int i = 1;
        int k;
        
        while(ss >> cur){
            k = cur.find(sw);
            if(k != string :: npos && k == 0)
                return i;
            i++;
        }
        
        // cout << s.find(sw);
        
        return -1;
    }
};