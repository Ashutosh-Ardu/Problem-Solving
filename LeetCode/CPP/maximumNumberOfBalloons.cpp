class Solution {
public:
    int maxNumberOfBalloons(string text) {
      unordered_map <char,int> mp;

      for(auto &i : text){
        mp[i] += 1;
      }
      int t = 10000;

      string b = "balon";

      mp['l'] /= 2;
      mp['o'] /= 2;

      for(auto &i : b){
        t = min(t,mp[i]);
      }

      if(t != 10000)
        return t;
      return 0;
    }
};