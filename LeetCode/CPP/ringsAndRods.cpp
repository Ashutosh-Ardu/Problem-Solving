class Solution {
public:
    int countPoints(string rings) {
        set<int> ar[10];
        int cnt = 0;
        
        for(int i=0;i<rings.length();i+=2){
            char c = rings[i];
            if(c == 'B')
                ar[rings[i+1] - 48].insert(1);
            else if(c == 'R')
                ar[rings[i+1] - 48].insert(2);
            else if(c == 'G')
                ar[rings[i+1] - 48].insert(3);
        }
        
        for(int i=0;i<10;i++){
            if(ar[i].size() == 3)
                cnt++;
        }
        return cnt;
    }
};