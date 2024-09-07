class Solution {
    public int longestSubarray(int[] nums) {
        int deleted=-1, max=0, left=0;
        
        for(int i=0; i<nums.length; i++){
            if(nums[i]==0 && deleted == -1)deleted=i;
            else if(nums[i]==0){
                left = deleted +1;
                deleted = i;
            }
            
            max = Math.max(max, i-left);
        }
        return max;
    }
}