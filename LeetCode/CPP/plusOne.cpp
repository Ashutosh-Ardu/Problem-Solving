class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        
        digits[digits.size()-1]++;
        for(int i=digits.size()-1;i>=0;i--){ 
            digits[i] = digits[i] + carry;
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }

        while(carry){
            digits.insert(digits.begin(),carry%10);
            carry /= 10;
        }
        return digits;
    }
};