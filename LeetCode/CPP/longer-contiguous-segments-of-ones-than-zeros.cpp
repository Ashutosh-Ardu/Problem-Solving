/*
    Link : https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/description/
*/
// code:
class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones = 0,zeros = 0;
        int k1,k2;
        k1 = k2 = 0;
        for(auto &i : s){
            if(i == '1'){
                k2 = 0;
                k1++;
            }else{
                k1 = 0;
                k2++;
            }
            ones = max(ones,k1);
            zeros = max(zeros,k2);
        }

        return ones > zeros;
    }
};