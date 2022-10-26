class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
      
      unordered_map<int, int> mpp;
      
      for(int i=0 ;i<len; i++){
        if(mpp[target-nums[i]] != 0) return {mpp[target-nums[i]]-1, i}; 
        mpp[nums[i]] = i+1;
      }
      return {};
    }
};