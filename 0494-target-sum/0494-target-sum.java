class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        HashMap<String, Integer> dp = new HashMap<>();
        
        return findWays(nums, 0, 0, dp, target);
    }
    
    int findWays(int[] nums, int ind, int current, HashMap<String, Integer> dp, int target){
        
        if(ind==nums.length && target==current) return 1;
        
        if(ind>=nums.length) return 0;
        
        String s = ind + "-" + current;
        // System.out.println(s);
        
        if(dp.containsKey(s)) return dp.get(s);
        
        dp.put( s, findWays(nums, ind+1, current+nums[ind], dp, target) + findWays(nums, ind+1, current-nums[ind], dp, target));
     return dp.get(s);    
    }
}