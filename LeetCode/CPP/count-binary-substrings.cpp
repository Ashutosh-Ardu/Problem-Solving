class Solution {
public:
    int countBinarySubstrings(string s) {
//         traverse group by group
        int res = 0, cur = 1, prev = 0;
        
        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1])
                cur++;
            else{
                res += min(prev,cur);
                prev = cur;
                cur = 1;
            }
        }
        
        return (res + min(cur,prev));
    }
};