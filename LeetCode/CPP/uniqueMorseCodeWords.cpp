class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string transform[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<words.size();i++){
            string t = "";
            for(int j=0;j<words[i].length();j++)
                // cout << words[i][j] << " ";
                t += transform[words[i][j] - 97];
            if(mp.find(t) == mp.end())
                mp.insert({t,1});
        }
        
        return mp.size();
    }
};