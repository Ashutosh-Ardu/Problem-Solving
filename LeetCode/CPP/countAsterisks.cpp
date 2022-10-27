class Solution {
public:
    int countAsterisks(string s) {
        int cnt = 0;
        int key = 0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '|')
                key++;
            else if(s[i] == '*' && key % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};