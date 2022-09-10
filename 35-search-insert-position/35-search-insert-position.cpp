class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo =0, hi =nums.size()-1, mid, ans=0;
      
      if(nums[0]> target)return 0;
      if(nums[hi]<target)return hi+1;
      
      while(lo<=hi){
        mid = lo + (hi-lo)/2;
        
        if(nums[mid]== target) return mid;
        
        if(nums[mid]<target){
          lo = mid +1;
        }
        else{
          hi = mid - 1;
          ans = mid;
        }
      }
      
      return ans;
    }
};

// Space Complexity: O(1)
// Time Complexity: O(logN) where log is the size of the nums array