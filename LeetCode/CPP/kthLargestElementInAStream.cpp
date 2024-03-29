class KthLargest {
public:
    
    int K;
    priority_queue<int,vector<int>,greater<int>> ar;
    
    KthLargest(int k, vector<int>& nums) {
        K = k;
        
        for(int i=0;i<nums.size();i++)
            add(nums[i]);
    }
    
    int add(int val) {
        ar.push(val);
        if(ar.size() > K){
            ar.pop();
        }
        return ar.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */