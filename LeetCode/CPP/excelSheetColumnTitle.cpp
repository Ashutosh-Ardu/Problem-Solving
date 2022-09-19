class Solution {
public:
    string convertToTitle(int c) {
        string out = "";
        while(c){
            c--;
            out += (c % 26) + 'A';
            c /= 26;
        }
        reverse(out.begin(),out.end());
        return out;
    }
};