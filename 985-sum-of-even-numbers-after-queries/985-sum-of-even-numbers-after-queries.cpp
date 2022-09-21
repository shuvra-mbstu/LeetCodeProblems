class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      long long sum=0;
        vector<int> ans;
        for(auto it:nums) sum+=(it%2)?0:it;
        for(auto it:queries){
          if(nums[it[1]]%2==0) sum-=nums[it[1]];
          if ((nums[it[1]]%2==0 && it[0]%2==0) ||(nums[it[1]]%2!=0 &&it[0]%2!=0)){
              nums[it[1]]+=it[0];
              sum+=nums[it[1]];
          }
          else nums[it[1]]+=it[0];
          ans.push_back(sum);  
        }
        return ans;  
    }
};