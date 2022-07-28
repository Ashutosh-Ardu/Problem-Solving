class Solution {
public:
    bool isPalindrome(long long x) {
        long long t = 0;
        long long y = x;
        
        while(y > 0){
            t = t*10 + (y % 10);
            y /= 10;
        }
        
        // cout<<t<<"\n";
        // int z = stoi(t);
        
        if(t == x)
            return true;
        else 
            return false;
    }
};