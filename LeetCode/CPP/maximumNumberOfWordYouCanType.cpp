// my solution
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool flag = true;
        int cnt = 0;
        
        for(auto &c : text){
            if(c == ' '){
                if(flag)
                    cnt++;
                else{
                    flag = true;
                }
            }
            
            if(flag && brokenLetters.find(c) != string :: npos){
                flag = false;
            }
        }
        
        if(flag)
            cnt++;
        return cnt;
    }
};

// revised solution
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool ar[26] = {};
        int res = 0,cnt = 0;
        for(auto &c : brokenLetters)
            ar[c - 'a'] = true;
        
        for(auto &c : text){
            if(c == ' '){
                res += (cnt == 0);
                cnt = 0;
            }
            else if(cnt == 0)
                cnt += ar[c - 'a'];
        }
        
        return res + (cnt == 0);
    }
};