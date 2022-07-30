class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
       int i=0,j=0;
        List<Integer> ar = new ArrayList<Integer>();
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ar.add(nums1[i]);
                i++;
            }
            else{
                ar.add(nums2[j]);
                j++;
            }
        }
        
        if(i == m){
            while(j < n){
                ar.add(nums2[j]);
                j++;
            }
        }
        else{
            while(i < m){
                ar.add(nums1[i]);
                i++;
            }
        }
        
        for(i=0;i<ar.size();i++)
            nums1[i] = ar.get(i);
    }
}