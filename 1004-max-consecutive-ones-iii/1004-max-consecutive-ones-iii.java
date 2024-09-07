class Solution {
    public int longestOnes(int[] nums, int k) {
        int countk=k, left=0, max=0;
        
        for(int right=0 ;right<nums.length;right++){
            if(nums[right]==0){
                countk--;
            }
            while(countk<0){ 
                if(nums[left]==0)countk++;
                
                left++;
            }
            max = Math.max(right-left+1, max);
        }
        // System.out.println("left = "+left+ " right = "+right+" count = "+sum);
        return max;
    }
}