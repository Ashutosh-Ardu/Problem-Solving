class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        
        for(auto str : words){
            int ind = str.find_last_of(str.back());
            
            if(ind < s.length() && str == s.substr(0,ind+1)){
                cnt++;
            }
        }
        return cnt;
    }
};

// better than the previous solution
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        
        for(auto str : words){
            cnt += s.find(str) < 1;
        }
        return cnt;
    }
};

// brute force solution
class Solution {
public:
        int countPrefixes(vector<string>& words, string s) { 
        int ans = 0;
        for(int i = 0 ; i<words.size() ; i++){
            string element = words[i];
            int len = element.length();
            
            for(int j = 0 ; j<len ; j++){
               
                if(element[j] != s[j]){
                    break;      
                }     
                if(j==len-1){
                    ans++;
                }
            }
        }
        return ans;
    }
};