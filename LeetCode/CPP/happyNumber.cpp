class Solution {
public:
    
    int findSq(int n){
        int rem = 0;
        
        while(n > 0){
            int k = n % 10;
            rem += k * k;
            n /= 10;
        }
        return rem;
    }
    
    bool isHappy(int n) {
        int left = n;
        int right = n;
        
        do{
            left = findSq(left);
            right = findSq(findSq(right));
            
            
        }while(left != right);
        
        if(left == 1)
                return true;
        return false;
    }
};