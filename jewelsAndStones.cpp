class Solution {
public:
    
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> ar(jewels.begin(),jewels.end());
        int count = 0;
        for(char c : stones){
            if(ar.count(c)) count++;
        }
        return count;
    }
    
};