class Solution {
    public int climbStairs(int n) {
        int[] out = new int[46];
        out[1] = 1;
        out[2] = 2;
        
        for(int i=3;i<=45;i++)
            out[i] = out[i-1] + out[i-2];
        return out[n];
    }
}