class Solution {
    public int jump(int[] nums) {
        int maxJump =0;
        int jumpCount=0;
        int currentPos=0;
        
        for(int i=0; i<nums.length; i++){
            
            maxJump = Math.max(maxJump, i+nums[i]);
            
            if(currentPos == nums.length-1)return jumpCount;
            
            if(i==currentPos){
                currentPos = maxJump;
                jumpCount++;
            }
        }
        return jumpCount;
    }
}