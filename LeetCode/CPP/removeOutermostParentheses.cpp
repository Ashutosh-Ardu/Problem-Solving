class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string out;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                if(!st.empty())
                   out += s[i]; 
                st.push(s[i]);
            }else{
                if(st.size() > 1)
                    out += s[i];
                st.pop();
            }
        }
        return out;
    }
};