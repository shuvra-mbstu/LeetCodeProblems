class Solution {
    int sum = 0;
    int dp[207][20007];
public:
    
    int coin_change(int ind, int coun, vector<int>& nums){
        
        if(ind >= nums.size() || coun > sum) return 0;
        
        if(dp[ind][coun] != -1) return dp[ind][coun];
       
        if(coun == sum){
            return 1;
        }
        
       int x = coin_change(ind+1, coun, nums);
       int y = coin_change(ind+1, coun + nums[ind], nums);
       
        return dp[ind][coun] = x | y;
    }
    bool canPartition(vector<int>& nums) {
        
        memset(dp, -1, sizeof(dp));
        
        
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        
        
        if(sum & 1) return false;
        
                sum = sum/2;

        
        return coin_change(0, 0, nums);
    }
};