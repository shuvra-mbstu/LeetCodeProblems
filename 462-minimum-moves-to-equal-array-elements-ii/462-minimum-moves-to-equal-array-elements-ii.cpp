class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int len = nums.size();
      sort(nums.begin(), nums.end());
      int avg = nums[len/2];
      
      int ans =0;
      for(int i=0; i<len; i++){
        ans += abs(nums[i] - avg);
      }
      return ans;
    }
};