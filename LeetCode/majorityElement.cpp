class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> ar;
        
        for(int i=0;i<nums.size();i++)
            ar[nums[i]] += 1;
        
        int max = 0,out = 0;
        
        for(auto it=ar.begin();it != ar.end();it++){
            if(it->second > max){
                max = it->second;
                out = it->first;
            }
        }
        
        return out;
    }
};