class Solution {
public:
    int countVowelSubstrings(string word) {
        int cnt = 0;
        unordered_set<char> s {{'a','e','i','o','u','A','E','I','O','U'}};
        set<char> s1;
        
        for(int i=0;i<word.size();i++){
            for(int j=i;j<word.size();j++){
                if(s.count(word[j]) == 0)
                    break;
                s1.insert(word[j]);
                if(s1.size() == 5)
                    cnt++;
            }
            s1.clear();
        }
        return cnt;
    }
};