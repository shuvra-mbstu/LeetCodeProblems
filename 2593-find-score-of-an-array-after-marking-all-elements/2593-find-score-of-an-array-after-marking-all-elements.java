class Solution {
    public long findScore(int[] nums) {
        int[] arr = new int[nums.length];
        
        for(int i=0; i<nums.length-1; i++){
            if(nums[i]<=nums[i+1]){
                nums[++i]=0;
            }
        }
        long res=0;
        for(int i=nums.length-1; i>0; i--){
            res += nums[i];
            if(nums[i]==0 || nums[i-1]==0)continue;
            
            if(nums[i]<=nums[i-1]) nums[--i]=0;
        }
        
        return res+nums[0];
    }   
}