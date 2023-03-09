/*
    Link: https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/
*/

// code:
class Solution {
public:
    int getLucky(string s, int k) {
        string st;

       for(auto &i : s){
           st += to_string((i - 'a') + 1);
       }

       int sum = 0;
        k--;
       for(auto &i : st){
           sum += (i - '0');
       }

       while(k--){
           int k1 = sum;
           sum = 0;
           while(k1 > 0){
               int t = k1 % 10;
               sum += t;
               k1 /= 10;
           }
       }
       return sum;
    }
};