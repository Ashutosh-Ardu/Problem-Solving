class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char cur = 'a';
        
        for(auto &c : word){
            if(cur != c){
                int k = abs(c - cur);
                time += min(k,26-k);
                cur = c;
            }
            time++;
        }
        return time;
    }
};