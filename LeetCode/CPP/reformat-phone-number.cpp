class Solution {
public:
    string reformatNumber(string num) {
        string number,res;
        
        for(auto &c : num){
            if(c >= '0' && c <= '9')
                number += c;
        }
        cout << number << " ";
        int n = number.size();
        for(int i=0;i<n;){
            if(n - i > 4 || n - i == 3){
                res += number.substr(i,3);
                i += 3;
            }else if(n - i == 4){
                res += number.substr(i,2);
                i += 2;
                res += "-";
                res += number.substr(i,2);
                i += 2;
            }else{
                res += number.substr(i,2);
                i += 2;
            }
            res += "-";
        }
        return res.substr(0,res.size()-1);
    }
};