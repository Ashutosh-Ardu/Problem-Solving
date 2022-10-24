class Solution {
public:
    int maxDepth(string s) {
        int m = 0;
        int cur = 0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '(')
                cur++;
            else if(s[i] == ')')
                cur--;
            m = max(m,cur);
        }
        return m;
    }
};