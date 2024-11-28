class Solution {
    public int removeDuplicates(int[] nums) {
        int left=1, right=1;
        
        while(right<nums.length){
            if(nums[left-1]!=nums[right]){
                nums[left++]= nums[right];
            }
            right++;
        }
        return left;
    }
}