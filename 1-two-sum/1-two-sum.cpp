// Programming Language Used: C++

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> mpp;
      vector<int> ans;
      
      int len = nums.size();
      
      for(int i=0; i<len; i++){
        if(mpp[nums[i]]!= 0){
         ans.push_back(mpp[nums[i]]-1);
          ans.push_back(i);
          return ans;
        }
       mpp[target - nums[i]] = i+1;
      }
      return ans;
    }
};

// Time Complexity: O(N) here N is the length of the nums array
// Space Complexity: O(N) here N is the size of the map in worst case