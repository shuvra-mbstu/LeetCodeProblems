class Solution {
public:
    int dp[207][20007], coun=0;
    
    int partitioning(int ind, int sum, vector<int>& nums){

        if(ind >= nums.size() || sum > coun) return 0;
        
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        if(sum == coun) return 1;
        
        
        int x = partitioning(ind + 1, sum, nums);
        int y = partitioning(ind + 1, sum + nums[ind], nums);
            
        return dp[ind][sum] = x | y ;
    }

    bool canPartition(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++){
            coun += nums[i];
        }
        
        if(coun & 1) return false;

        coun = (coun / 2);
        
        memset(dp, -1, sizeof(dp));
        
        return partitioning(0, 0, nums);
    }
};