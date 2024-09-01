class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mp = new HashMap <>();
        for(int i=0; i<nums.length; i++){
            if(mp.containsKey(target-nums[i])){
                
                int[] result = { mp.get(target-nums[i]), i };
                return result;
            }
    
            mp.put(nums[i], i);
        }
        return null;
    }
}