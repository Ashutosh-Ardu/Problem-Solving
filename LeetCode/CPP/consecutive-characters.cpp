/*
 Link : https://leetcode.com/problems/consecutive-characters/description/
*/
// code:
class Solution {
public:
    int maxPower(string s) {
        int res = 0,k = 1;
        char c;
        for(auto &i : s){
            if(i == c){
                k++;
            }else
                k = 1;
            c = i;
            res = max(res,k);
        }

        return res;
    }
};