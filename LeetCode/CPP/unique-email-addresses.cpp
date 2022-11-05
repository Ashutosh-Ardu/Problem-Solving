class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set <string> res;
        
        for(auto &str : emails){
            string clean_string;
            
            for(auto &ch : str){
                if(ch == '+' || ch == '@') break;
                if(ch == '.') continue;
                clean_string += ch;
            }
            
            clean_string += str.substr(str.find('@'));
            res.insert(clean_string);
        }
        return res.size();
    }
};