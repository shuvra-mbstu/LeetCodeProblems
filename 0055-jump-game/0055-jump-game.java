class Solution {
    public boolean canJump(int[] nums) {
        int cost= nums[0];
        
        for(int i=0; i<nums.length; i++){
            cost = Math.max(cost-1, nums[i]);
            
            if(cost<=0 && i != nums.length-1) return false;
        }
        return true;
    }
}