// link : https://leetcode.com/problems/find-duplicate-file-in-system/discuss/2595054/C%2B%2B-or-Hashmap-Approach
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map <string,vector<string>> ar;
        
        for(auto path : paths){
            stringstream ss(path);
            string dir;
            string file;
            getline(ss,dir,' ');
            
            while(getline(ss,file,' ')){
                string content = file.substr(file.find('(')+1,file.find(')')-file.find('(') - 1);
                string name = dir + '/' + file.substr(0,file.find('('));
                ar[content].push_back(name);
            }
        }
            
        vector<vector<string>> out;
            
        for(auto it = ar.begin();it != ar.end();it++){
            if((it->second).size() > 1){ //meaming they are duplicates
                out.push_back(it->second);
            }
        }
            
        return out;
    }
};