class Solution {
public:
    map< pair<int,int>, int> mpp;
    int targetSum, len;
    int findTargetSumWays(vector<int>& nums, int target) {
        len = nums.size();

        targetSum = target;
        
        return findWays(0,0, nums);
    }
    
    int findWays(int ind, int sum, vector<int>& nums){
        
        if(ind == len && sum == targetSum) return 1;
        
        if(ind>=len) return 0;
        
        pair<int, int> pi = {ind, sum};
        
        if(mpp.find(pi) != mpp.end()) return mpp[pi];
        
        return mpp[pi] = findWays(ind + 1, sum - nums[ind], nums) + findWays(ind + 1, sum + nums[ind], nums);
    }
};