class Solution {
    public long findScore(int[] nums) {
        int n = nums.length;
        for (int i = 0; i < n - 1; ++i) 
            if (nums[i+1] >= nums[i]) 
                nums[++i] = 0; // sets element to 0 and skips it
        
        for (int i = n - 1; i > 0; --i) {
            if (nums[i-1] == 0 || nums[i] == 0) continue; // check validity before comparison
            if (nums[i-1] >= nums[i]) 
                nums[--i] = 0;
        }
        
        long sum = 0;
        for (int i : nums) sum += i;
        
        return sum;
    }
}