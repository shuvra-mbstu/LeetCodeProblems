class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int[] DP = cost;
        
        for(int i=2; i<cost.length; i++){
            DP[i] = Math.min(DP[i-1], DP[i-2]) + DP[i];
        }
        return Math.min(DP[cost.length-1], DP[cost.length-2]);
    }
}