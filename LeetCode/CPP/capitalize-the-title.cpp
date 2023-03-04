/*
* link : https://leetcode.com/problems/capitalize-the-title/description/
*/

//code :
class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string cur;
        string res = "";

        while(ss >> cur){
            transform(cur.begin(), cur.end(), cur.begin(), ::tolower);
            if(cur.size() > 2)
                cur[0] = char(int(cur[0]) - 32);
            res += cur;
            res += " ";
        }
        cout << res << " ";
        return res.substr(0,res.size()-1);
    }
};