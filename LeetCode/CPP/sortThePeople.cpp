class Solution {
public:
    
    static bool higher(pair<string,int> a,pair<string,int> b){
        return a.second > b.second;
    }
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> out;
        vector<pair<string,int>> pr;
        
        for(int i=0;i<names.size();i++){
            pr.push_back(make_pair(names[i],heights[i]));
        }
        
        sort(pr.begin(),pr.end(),higher);
        
        for(int i=0;i<names.size();i++)
            out.push_back(pr[i].first);
        
        return out;
    }
};