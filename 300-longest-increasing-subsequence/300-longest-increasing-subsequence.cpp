class Solution {
public:
  int dp[2505][2505];
    
    int lengthOfLIS(vector<int>& nums) {
      
      if(nums.size() == 1) return 1;
      memset(dp, -1, sizeof(dp));
             
        return res(0, -1, nums);
    }
  
  int res(int curr, int last, vector<int>& nums){
    if(curr>= nums.size())return 0;
    
    if(dp[curr][last+1]!= -1) return dp[curr][last+1];
    
    int res1=0, res2=0;
    if(last== -1 || nums[curr] > nums[last]){
      res1 = res(curr+1, curr, nums) + 1;
    }
    
    res2 = res(curr+1, last, nums);
    return dp[curr][last+1] = max(res1, res2);
  }
};