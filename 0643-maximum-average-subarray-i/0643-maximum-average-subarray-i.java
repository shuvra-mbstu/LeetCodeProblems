class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int sum =0;
        double res = -100000.0;
        
        for(int i=0; i<nums.length; i++){
            sum += nums[i];
            
            if(i >= k-1){
                res = Math.max(res, (double) ((double)sum/k));
                sum -= nums[i-k+1];
            }
        }
        return res;
    }
}