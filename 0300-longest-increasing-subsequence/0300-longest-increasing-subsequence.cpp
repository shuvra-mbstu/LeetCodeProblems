class Solution {
public:
   
    int function(int i,vector<int>&nums,int prev,vector<vector<int>>&dp){
        if(i>=nums.size())return 0;
        
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take=1+function(i+1,nums,i,dp);
        }
        
        int nt=0;
        nt=function(i+1,nums,prev,dp);
        
        return dp[i][prev+1]=max(take,nt);
        
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        
        return function(0,nums,-1,dp);
    }
};