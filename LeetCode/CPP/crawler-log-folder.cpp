class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level = 0;
        
        for(auto &str : logs){
            if(str.substr(0,2) == "./")
                continue;
            else if(str.substr(0,2) == ".."){
                if(level != 0)
                    level--;
            }
            else{
                level++;
            }
        }
        return level;
    }
};