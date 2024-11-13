class Solution {
    public int removeDuplicates(int[] nums) {
        int left=2;
        
        if(nums.length<=2) return nums.length;
        
        for(int i=2; i<nums.length; i++){
            if(nums[i] != nums[left-1] || nums[i] != nums[left-2]){
                nums[left++] = nums[i];
            }
        }
        return left;
    }
}