class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map <char,char> mp;
        char c = 'a';
        for(int i=0;i<key.length();i++){
            if(key[i] == ' ')
                continue;
            if(mp.find(key[i]) == mp.end()){
                mp.insert({key[i],c});
                c++;
            }
        }
        
        string out = "";
        
        for(int i=0;i<message.length();i++){
            if(message[i] == ' ')
                out += " ";
            else
                out += mp[message[i]];
        }
        return out;
    }
};