class Solution {
public:
    int hammingWeight(uint32_t n) {
        int out = 0;
        
        while(n > 0){
            out++;
            n &= (n - 1); // change the first set bit from right to 0
        }
        return out;
    }
};