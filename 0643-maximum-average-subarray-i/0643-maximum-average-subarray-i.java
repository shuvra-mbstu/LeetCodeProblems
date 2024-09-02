class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int i=0, j=0;
        Double sum=0.0;
        Double res=-100000.0;
        while(j<k){
            sum += nums[j++];
        }
        res = Math.max(res, sum/(1.0 *k));

        while(j<nums.length){
            sum += nums[j++];
            sum -= nums[i++];
        res = Math.max(res, sum/(1.0 *k));
        }
        return res;
    }
}