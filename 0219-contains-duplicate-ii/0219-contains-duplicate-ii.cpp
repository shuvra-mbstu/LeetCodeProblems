class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
      
      int len = nums.size();
      
      for(int i=0; i<len; i++){
        if(mpp[nums[i]] && (abs(i- mpp[nums[i]] + 1) <= k)) return true;
        
        mpp[nums[i]] = i+1;
      }
      
      return false;
    }
};