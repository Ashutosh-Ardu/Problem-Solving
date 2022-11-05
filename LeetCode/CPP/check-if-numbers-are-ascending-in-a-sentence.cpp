class Solution {
public:
    bool areNumbersAscending(string s) {
        int cur = 0;
        
        istringstream ss(s);
        string t;
        
        while(ss >> t){
            if(isdigit(t.back())){
                int k = stoi(t);
                if(k <= cur){
                    return false;
                }else
                    cur = k;
            }
        }
        return true;
    }
};

// faster solution
class Solution {
public:
    bool areNumbersAscending(string s) {
        int cur = 0,prev = 0;
        
        for(auto &c : s){
            if(isdigit(c)){
                cur += cur * 10 + (c - '0');
            }else if(cur != 0){
                if(prev >= cur)
                    return false;
                prev = cur;
                cur = 0;
            }
        }
        return (cur == 0 || cur > prev);
    }
};