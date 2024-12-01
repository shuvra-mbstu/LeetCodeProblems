class Solution {
    public int subarraySum(int[] nums, int k) {
      Map<Integer, Integer> sum = new HashMap <>();
      
        int len = nums.length;
        int count =0, tsum=0;
        
        sum.put(0, 1);
        for(int i=0; i<len; i++){
            tsum += nums[i];
            
            count += sum.getOrDefault(tsum-k, 0);
            
            sum.put(tsum, sum.getOrDefault(tsum,0)+1);
        }
        return count;
    }
}