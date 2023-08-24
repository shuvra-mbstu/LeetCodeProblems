class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        
        vector<int>prefix(len, 1), suffix(len+1, 1), ans(len);
        
        
        prefix[0] = nums[0];
        suffix[len-1] = nums[len-1];
        
        for(int i=1; i<len; i++){
            prefix[i] = prefix[i-1]*nums[i];
            suffix[len-i-1] = suffix[len-i] * nums[len-i-1];
        }
        
        for(int i=1; i<len; i++){
            ans[i] = prefix[i-1] * suffix[i+1];
        }

        ans[0] = suffix[1];
        
        return ans;
    }
};