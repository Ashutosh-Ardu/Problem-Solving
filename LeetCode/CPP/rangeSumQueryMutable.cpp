class NumArray {
public:
    vector<int> out;
    int sum = 0;
    
    NumArray(vector<int>& nums) {
        // making the vector available locally to other member function of the class
        out = nums; 
        for(int i=0;i<out.size();i++)
            sum += out[i];
    }
    
    void update(int index, int val) {
        sum -= out[index];
        out[index] = val;
        sum += out[index];
    }
    
    int sumRange(int left, int right) {
        // the order of order of calling the of these functions might be random
//       hence using new var for each member function.  
        int ret = sum; 
        for(int i=0;i<left;i++)
            ret -= out[i];
        for(int i=right + 1;i<out.size();i++)
            ret -= out[i];
        return ret;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */