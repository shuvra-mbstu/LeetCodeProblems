class Solution {
       public int maximumBeauty(int[] nums, int k) {
        // Step 1: Sort the array
        Arrays.sort(nums);

        // Step 2: Initialize sliding window pointers
        int start = 0;
        int maxBeauty = 0;

        // Step 3: Sliding window logic
        for (int end = 0; end < nums.length; end++) {
            // Check if the range becomes invalid
            while (nums[end] - nums[start] > 2 * k) {
                start++;
            }
            // Update the maximum beauty
            maxBeauty = Math.max(maxBeauty, end - start + 1);
        }

        return maxBeauty;
    }
}