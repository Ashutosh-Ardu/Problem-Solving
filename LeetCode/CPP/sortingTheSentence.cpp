class Solution {
public:
    string sortSentence(string s) {
        map <char,string> mp;
        string t = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                t = "";
            }else if(isdigit(s[i])){
                mp.insert({s[i],t});
            }
            else
                t += s[i];
        }
        
        
        string out = "";
        for(auto i=mp.begin(); i != mp.end();){
            out += i->second;
            i++;
            if(i != mp.end())
                out += " ";
        }
        return out;
    }
};