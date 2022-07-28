class Solution {
public:
    
    int val(char c){
        if(c == 'I')
            return 1;
        else if(c == 'V')
            return 5;
        else if(c == 'X')
            return 10;
        else if(c == 'L')
            return 50;
        else if(c == 'C')
            return 100;
        else if(c == 'D')
            return 500;
        else 
            return 1000;
    }
    
    int romanToInt(string s) {
        // int ar[] = {1,5,10,50,100,500,1000};
        // char s[] = {'I','V','X','L','D','M'};

        int i = s.length() - 1;
        int x = val(s[i]);i--;
        
        for(;i>=0;i--){
            if(val(s[i]) >= val(s[i+1]))
                x += val(s[i]);   
            else
                x -= val(s[i]);
        }
        
        // cout<<x<<"\n";
        return x;
    }
};