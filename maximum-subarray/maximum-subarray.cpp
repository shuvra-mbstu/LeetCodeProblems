// Language used: C++
// Author name: SD

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return BestSubArray(0, nums.size()-1, nums);
    }
    
    int BestSubArray(int left, int right, vector<int>& nums){
        
        if(left > right) return INT_MIN;
        
        int mid = (left + right) / 2;
        
        int leftSum = BestSubArray(left, mid-1, nums);
        int rightSum = BestSubArray(mid+1, right, nums);
        
        int midSum = nums[mid];
        
        int lSum =0, rSum =0, cur = 0;
        
        for(int i = mid-1; i >= left; i--){
            cur += nums[i];
            
            lSum = max(lSum, cur);
        }
        
        cur =0;
        
         for(int i = mid+1; i <= right; i++){
            cur += nums[i];
            
            rSum = max(rSum, cur);
        }
       
        midSum += (lSum + rSum);
        
        return max(midSum, max(leftSum, rightSum));
    }
    
};

// Time Complexity: O(N * logN) here N is the size of nums array
// Space Complexity: O(logN)