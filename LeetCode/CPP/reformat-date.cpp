class Solution {
public:
    string reformatDate(string date) {
       vector<string> ar;
       unordered_map<string,string> mp = {
         {"Jan","01"},
         {"Feb","02"},
         {"Mar","03"},
         {"Apr","04"},
         {"May","05"},
         {"Jun","06"},
         {"Jul","07"},
         {"Aug","08"},
         {"Sep","09"},
         {"Oct","10"},
         {"Nov","11"},
         {"Dec","12"},
       };
      string t;
       for(auto &s : date){
         if(s == ' '){
           ar.push_back(t);
           t.clear();
         }
         else{
           t += s;
         }
       }
       ar.push_back(t);
      t = ar[0].substr(0,ar[0].size() - 2);
      if(t.size() == 1)
        t.insert(0,"0");
      return ar[2] + "-" + mp[ar[1]] + "-" + t;
    }
};