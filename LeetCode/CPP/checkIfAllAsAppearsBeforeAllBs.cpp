// brute force
class Solution {
public:
    bool checkString(string s) {
        int a = -1,b = -1;
        
        for(int i = s.length()-1;i>=0;i--){
            if(s[i] == 'a'){
                a = i;
                break;
            }
        } 
        
        for(int i = 0;i<s.length();i++){
            if(s[i] == 'b'){
                b = i;
                break;
            }
        }
        
        return ((b == -1) || (b >= a)) ? true : false;
    }
};

// checking if ba exists in the string or not
class Solution {
public:
    bool checkString(string s) {
        return s.find("ba") == string :: npos;
    }
};

// checking whether string is sorted or not
class Solution {
public:
    bool checkString(string s) {
        return is_sorted(s.begin(),s.end());
    }
};