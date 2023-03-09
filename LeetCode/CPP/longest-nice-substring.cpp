/*
* Link : https://leetcode.com/problems/longest-nice-substring/description/
* reference : https://leetcode.com/problems/longest-nice-substring/solutions/3245857/js-solution/
*/

// code:

class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size() < 2) return "";

        set <char> st;

        for(auto &i : s){
            st.insert(i);
        }

        for(int i=0;i<s.size();i++){
            char a = toupper(s[i]);
            char b = tolower(s[i]);

            if(st.find(a) != st.end() && st.find(b) != st.end())
                continue;
            
            string A = longestNiceSubstring(s.substr(0,i));
            string B = longestNiceSubstring(s.substr(i+1));

            return A.size() >= B.size() ? A : B;
        }

        return s;
    }
};
