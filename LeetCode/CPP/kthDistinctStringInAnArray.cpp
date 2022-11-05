class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        
        for(auto str : arr)
            mp[str] += 1;
        
        for(auto str : arr){
            if(mp[str] == 1 && --k == 0){
                return str;
            }
        }
        
        return "";
    }
};