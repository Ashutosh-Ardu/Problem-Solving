class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        vector<string> q;
        istringstream ss(text);
        string cur;
        int i = 0;
        
        while(ss >> cur){
            q.push_back(cur);
        }
        
        for(int i=0;i<= q.size() - 3;i++){
            if(q[i] == first && q[i+1] == second)
                res.push_back(q[i+2]);
        }
        
        return res;
    }
};