class Solution {
public:
    string freqAlphabets(string s) {
      int n = s.length()-1;
        string out;
        
        while(n >= 0){
            if(s[n] == '#'){
                int a = s[n-1] - 48;
                a = (s[n-2] - 48)*10 + a;
                char c = 96+a;
                // cout << c << " ";
                out += c;
                n -= 3;
            }else{
                out += (s[n] + 48);
                n--;
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};