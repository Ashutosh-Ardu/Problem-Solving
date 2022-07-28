class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ar;
        
        for(int i=0;i<nums.size();i++){
            if(ar[nums[i]] == 0)
                ar[nums[i]]++;
            else
                return true;
        }
        return false;
    }
};