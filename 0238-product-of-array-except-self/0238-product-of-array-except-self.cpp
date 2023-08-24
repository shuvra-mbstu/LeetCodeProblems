class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        
        vector<int> ans(len);
        
        
       int zero = 0, product = 1;
        
        for(int i=0; i<len; i++){
           if(nums[i]==0){
               zero++;
               
               if(zero>1) return ans;
           }
            else{
                
                product *= nums[i];
            }
        }
        
        for(int i=0; i<len; i++){
            if(nums[i]==0) ans[i] = product;
            else
              ans[i] = zero ? 0 : product / nums[i];
        }
        
        return ans;
    }
};