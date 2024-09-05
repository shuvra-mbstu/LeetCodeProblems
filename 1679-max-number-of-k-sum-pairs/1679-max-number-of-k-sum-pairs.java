class Solution {
    public int maxOperations(int[] nums, int k) {
        Map<Integer, Integer> mp= new HashMap<>();
        
        int count=0;
        for(int i=0; i<nums.length; i++){
            int value = k-nums[i];
            if(mp.containsKey(value) && mp.get(value)> 0){
                count++;
                mp.put(value, mp.get(value)-1);
            }
            else{
                mp.put(nums[i], mp.getOrDefault(nums[i], 0)+1);
            }
        }
        return count;
    }
}