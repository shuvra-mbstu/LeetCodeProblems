class Solution {
public:
  
 vector<int> sortedSquares(vector<int>& nums) {

   int lo = 0, hi =0;
   vector<int> ans;
   
   while(nums[lo]<0 && lo<nums.size()-1){
     lo++;
   }
   hi = lo;
   lo--;
   
   while(lo>=0 || hi <nums.size()){
     int x = INT_MAX, y = INT_MAX;
     
     if(lo>=0) x = nums[lo]*nums[lo];
     
     if(hi< nums.size()) y = nums[hi]*nums[hi];

     if(x<y){
       ans.push_back(x);
       lo--;
     }
     else{
       ans.push_back(y);
       hi++;
     }
   }
   return ans;
 }
};