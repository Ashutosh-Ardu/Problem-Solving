class Solution {
public:
    
    bool check(char c){
        if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
            return true;
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
            return true;
        return false;
    }
    
    string toGoatLatin(string s) {
        string a = "a";
        string out,t;
        
        for(int c = 0;c < s.size();c++){
            if(s[c] != ' ')
                t += s[c];
            if(s[c] == ' ' or c == s.size() - 1){
                if(!check(t[0])){
                    t += t.front();
                    t.erase(t.begin());
                }
                t += "ma";
                t += a;
                a += "a";
                if(c != s.size() - 1)
                    t += " ";
                out += t;
                t = "";
            }
        }
        return out;
    }
};

// faster solution
class Solution {
public:
    
    string toGoatLatin(string s) {
       unordered_set <char> v {{'a','e','i','o','u','A','E','I','O','U'}} ;
        istringstream ss(s);
        int i = 0;
        string res,cur;
        
        while(ss >> cur){
            res += ' ' + ((v.count(cur[0])) == 1 ? cur : (cur.substr(1) + cur[0])) + "ma";
            i++;
            for(int j=0;j<i;j++) res += "a";
        }
        
        return res.substr(1);
    }
};