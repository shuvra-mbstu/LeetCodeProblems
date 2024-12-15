class Solution {
    public long continuousSubarrays(int[] nums) {
        int n = nums.length;
        
        Map<Integer, Integer> countMap = new HashMap<>();
        int j = 0;
        long count = 0;
        
        for(int i = 0; i < n; i++) {
            countMap.put(nums[i], 1 + countMap.getOrDefault(nums[i], 0));

            while(i-j+1 > getCount(nums[i], countMap)) {
                countMap.put(nums[j], countMap.get(nums[j])-1);
                j++;
            }
            
            count += i-j+1;
            
        }
        
        return count;
    }
    
    private int getCount(int num, Map<Integer, Integer> countMap) {
        int count = countMap.getOrDefault(num, 0) + countMap.getOrDefault(num-1, 0) + countMap.getOrDefault(num+1, 0) + countMap.getOrDefault(num-2, 0) + countMap.getOrDefault(num+2, 0);

        return count;
    }
}