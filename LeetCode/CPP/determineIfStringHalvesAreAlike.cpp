class Solution {
public:
    
    int count(string t){
        int cnt = 0;
        for(auto c : t){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                cnt++;
            else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                cnt++;
        }
        return cnt;
    }
    
    bool halvesAreAlike(string s) {
        int n = s.length();
        
        if(count(s.substr(0,n/2)) == count(s.substr(n/2,n)))
           return true;
        return false;
    }
};