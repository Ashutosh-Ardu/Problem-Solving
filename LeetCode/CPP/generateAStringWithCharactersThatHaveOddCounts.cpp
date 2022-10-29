class Solution {
public:
    
    
    string generateTheString(int n) {
        string out;
        
        if(n % 2 != 0){
            for(int i=0;i<n;i++)
                out += "a";
        }
        else{
            out += "a";
            for(int i=0;i<n-1;i++)
                out += "b";
        }
        return out;
    }
};