class Solution {
public:
    string removeDuplicates(string s) {
        string out;
        
        for(auto &c : s){
            if(out.back() == c)
                out.pop_back();
            else
                out.push_back(c);
        }
        return out;
    }
};