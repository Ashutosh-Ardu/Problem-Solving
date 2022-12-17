class Solution {
public:
    int maximumValue(vector<string>& strs) {
      int res = 0;

      for(auto &str : strs){
        int val = 0;
        // cout << str << " ";

        for(auto &i : str){
          if(i < '0' || i > '9'){
            val = 0;
            res = (str.size() > res) ? str.size() : res;
            break;
          }
          // cout << i << " ";
          val = val * 10 + (i - 48);
        }

        if(val > res)
          res = val;
      }
      return res;
    }
};