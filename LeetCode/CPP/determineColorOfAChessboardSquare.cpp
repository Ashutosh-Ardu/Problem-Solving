class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0];
        int b = coordinates[1];
        
        if((a - 96) % 2 == 0){
            if(b % 2 == 0)
                return false;
            return true;
        }else{
            if(b % 2 == 0)
                return true;
            return false;
        }
    }
};