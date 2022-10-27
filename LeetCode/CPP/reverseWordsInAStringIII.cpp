class Solution {
public:
    string reverseWords(string s) {
//         string out = "";
        
//         string t  = "";
        
//         for(auto c : s){
//             if(c == ' '){
//                 reverse(t.begin(),t.end());
//                 out += t;
//                 out += " ";
//                 t = "";
//             }else
//                 t += c;
//         }
//         reverse(t.begin(),t.end());
//         out += t;
        
//         return out;
        
        stringstream ss(s);
        
        string t,ans;
        
        while(getline(ss,t,' ')){
            reverse(t.begin(),t.end());
            ans += t;
            ans += " ";
        }
        
        return ans.substr(0,ans.size()-1);
    }
};