// link : https://leetcode.com/problems/excel-sheet-column-number/discuss/1790101/C%2B%2B-oror-4-Lines-oror-Easy-To-UnderStand-oror-0ms-oror-100
class Solution {
public:
    int titleToNumber(string c) {
        int out = 0;
        for(int i=0;i<c.length();i++){
            int k = c[i] - 'A' + 1;
            out = out * 26 + k;
        }
        return out;
    }
};