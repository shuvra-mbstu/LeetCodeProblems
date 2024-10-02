class Solution {
    public int rob(int[] nums) { 
        int len = nums.length;
        if(len ==1) return nums[0];
        
        int[] res = new int[len + 2];        
    
        res[0] = nums[0];
        res[1] = Math.max(nums[1], nums[0]);
        
        for(int i=2; i<len; i++){
            res[i] = Math.max(nums[i] + res[i-2], res[i-1]);

        }
        
        return res[len-1];
    }
}