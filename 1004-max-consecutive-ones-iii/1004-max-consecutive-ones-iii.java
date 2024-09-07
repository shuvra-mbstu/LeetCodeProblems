class Solution {
    public int longestOnes(int[] nums, int k) {
        int countk=k, left=0, right=0, max=0, sum=0;
        
        while(right<nums.length){
            if(nums[right]==1){
                sum++;
                right++;
            }
            else if(countk>0){
                sum++;
                right++;
                countk--;
            }
            else{
                while(nums[left]==1 && left<right){ 
                    left++;
                    sum--;
                }
                
                left++;
                countk++;
                sum--;
            }
            // System.out.println("left = "+left+ " right = "+right+" count = "+sum);
            max = Math.max(sum, max);
        }
        return max;
    }
}