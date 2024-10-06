class Solution {
    Integer[][] dp ;
    public int longestCommonSubsequence(String text1, String text2) {
        dp = new Integer[text1.length()][text2.length()];
        return solve(text1, text1.length()-1, text2, text2.length()-1);
    }
    private int solve(String text1, int n1, String text2, int n2){
        if(n1==-1 || n2==-1){
            return 0;
        }
        if(dp[n1][n2]!=null){
            return dp[n1][n2];
        }
        int take=0;
        if(text1.charAt(n1)==text2.charAt(n2)){
            take = 1+solve(text1, n1-1, text2, n2-1);
        }
        int dontTake = Math.max(solve(text1, n1, text2, n2-1)
        ,solve(text1, n1-1, text2, n2));

        return dp[n1][n2] = Math.max(take,dontTake);
        
    }
}