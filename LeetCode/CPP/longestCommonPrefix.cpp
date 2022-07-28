class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        string comp = strs[0];
        
        for(int i=1;i<strs.size();i++){
            ans = "";
            for(int j=0;comp[j] && strs[i][j];j++){
                if(comp[j] == strs[i][j])
                    ans += comp[j];
                else{
                    break;
                }
            }
            comp = ans;
        }
        // cout<<ans<<"\n";
        return ans;
    }
};