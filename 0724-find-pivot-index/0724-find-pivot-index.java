class Solution {
    public int pivotIndex(int[] nums) {
        int suffix = 0;
        
        for(int i=0; i<nums.length; i++){
            suffix += nums[i];
        }
        int prefix =0;
        for(int i=0; i<nums.length; i++){
            suffix -= nums[i];
            
            if(prefix == suffix)return i;
            prefix += nums[i];
        }
        return -1;
    }
}