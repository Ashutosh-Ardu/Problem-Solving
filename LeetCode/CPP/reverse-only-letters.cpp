/*
* Link: https://leetcode.com/problems/reverse-only-letters/submissions/908712596/
*/

// code:
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string t,res;

        for(int i = s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                t += s[i];
            }
        }

        int j = 0;
        for(auto &i : s){
            if(isalpha(i))
                res += t[j++];
            else
                res += i;
        }

        return res;
    }
};