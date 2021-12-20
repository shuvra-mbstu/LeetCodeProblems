class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        
        int len = nums.size();
        int coun = 0;

        for(int i = 0; i < len; i++){
            
            coun += nums[i];
            
            ans = max(coun, ans);
            
            if(coun < 0)coun = 0;
        }
        
        return ans;
    }
};