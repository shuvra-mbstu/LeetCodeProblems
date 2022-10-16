class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int count = 0;
      
      if(nums[0]!=0)count++;
      
      for(int i=1; i<nums.size(); i++){
        if(nums[i]!=nums[i-1])count++;
      }
      return count;
    }
};