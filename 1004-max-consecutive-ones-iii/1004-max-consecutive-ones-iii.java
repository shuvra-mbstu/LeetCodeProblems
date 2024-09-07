class Solution {
    public int longestOnes(int[] nums, int k) {
        int countk=k, left=0, right=0, max=0;
        
        while(right<nums.length){
            if(nums[right]==1){
                right++;
            }
            else if(countk>0){
                right++;
                countk--;
            }
            else{
                while(nums[left]==1 && left<right){ 
                    left++;
                }
                
                left++;
                countk++;
            }
            // System.out.println("left = "+left+ " right = "+right+" count = "+sum);
            max = Math.max(right-left, max);
        }
        return max;
    }
}