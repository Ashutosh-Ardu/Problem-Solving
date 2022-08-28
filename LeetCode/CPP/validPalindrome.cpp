class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";
        string a;
        for(int i=0;i < n;i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                str += s[i];
            // if(s[i] >= '0' && s[i] <= '9')
            //     str += s[i];
            else if(s[i] >= 'A' && s[i] <= 'Z')
                str += s[i] + 32;
        }
        a = str;
        reverse(a.begin(),a.end());
        cout << str << "\n";
        cout << a << "\n";
        
        return (a == str) ? true : false;
    }
};