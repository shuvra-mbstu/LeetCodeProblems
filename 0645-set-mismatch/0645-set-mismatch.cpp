class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
      int dup, count=0;
      int len = nums.size();

      for(int i=0; i<len; i++){

        int x = abs(nums[i])-1;
        
        if(nums[x]>0){
          count += x +1;
          nums[x] *= -1;
        }
        else{
          dup = abs(nums[i]);
        }
      }
      len = (len*(len+1))/2;
      
      // cout<<count<<endl;
      
      return {dup,  len - count};
    }
};