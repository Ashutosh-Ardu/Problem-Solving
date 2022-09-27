/* Just you need check whether each charcacter of both the strings are mapped to unique
characters. If not, then the values are updated and hence on traversal during the next time
check will have unmatched mapping and hence we can return false here. */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
    
        int n = s.length();

        for(int i=0;i<n;i++){
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        auto it1 = mp1.begin();
        auto it2 = mp2.begin();
        int flag = 1;
        for(int i=0;i<n;i++){
            if(mp1[s[i]] != t[i] || mp2[t[i]] != s[i]){
                return false;
            }
        }

        return true;
    }
};