class Solution {
public:
    
    bool prefix(char c){
        if(c == '(' || c == '{' || c == '[')
            return true;
        return false;
    }
    
    bool isValid(string s) {
        vector<char> cur;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(prefix(s[i]))
                cur.push_back(s[i]);
            else{
                if(cur.empty())
                    return false;
                else if((s[i] == ')' && cur.back() == '(') || (s[i] == '}' && cur.back() == '{') || (s[i] == ']' && cur.back() == '['))
                    cur.pop_back();
                else 
                    return false;
            }
        }
        return (cur.empty()) ? true : false;
    }
        
        
};