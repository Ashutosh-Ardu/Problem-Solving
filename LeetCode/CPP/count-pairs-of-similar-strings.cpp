/*
* link : https://leetcode.com/problems/count-pairs-of-similar-strings/description/
* reference : https://leetcode.com/problems/count-pairs-of-similar-strings/solutions/3166484/o-1-space-o-n-k-time-hashmap-approach-python3/
*/
// code:
class Solution {
public:
    int similarPairs(vector<string>& words) {

        unordered_map <string,int> mp;
        int res = 0;

        for(auto &w : words){
            set<char> s;
            for(auto &i : w){
                s.insert(i);
            }

            string t;
            for(auto &i : s)
                t += i;

            mp[t] += 1;
        }

        for(auto &i : mp){
            res += ((i.second) * (i.second - 1 )) / 2;
        }

        return res;
    }
};