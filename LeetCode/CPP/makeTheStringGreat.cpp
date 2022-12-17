class Solution {
public:
    string makeGood(string s) {
      string res;

      for(auto & c : s){
        if(res.size() && abs(c - res.back()) == 32)
          res.pop_back();
        else
          res.push_back(c);
      }

      return res;
    }
};