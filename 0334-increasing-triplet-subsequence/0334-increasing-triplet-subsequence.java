class Solution {
    public boolean increasingTriplet(int[] nums) {
        int firstLo = Integer.MAX_VALUE, secondLo = Integer.MAX_VALUE;
        
        for(int i=0; i<nums.length; i++){
            if(nums[i]<=firstLo){
                firstLo = nums[i];
            }
            else if(nums[i]<=secondLo){
                secondLo = nums[i];
            }
            else return true;
        }
        return false;
    }
}