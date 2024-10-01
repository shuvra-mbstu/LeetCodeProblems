class Solution {
    public boolean canArrange(int[] arr, int k) {
      // Frequency map to store the count of remainders
        Map<Integer, Integer> frequency = new HashMap<>();
                
        // Fill the frequency map
        for (int i = 0; i < arr.length; i++) {
            int remainder = arr[i] % k;
            // Ensure the remainder is non-negative (handle negative numbers)
            if (remainder < 0) remainder += k;
            // Update the frequency of the remainder
            frequency.put(remainder, frequency.getOrDefault(remainder, 0) + 1);
        }
        
        // Check if the pairs can be formed
        for (int remainder : frequency.keySet()) {
            // Get the count of this remainder
            int count = frequency.get(remainder);
            
            if (remainder == 0) {
                // Special case: If remainder is 0, count must be even (0 pairs with 0)
                if (count % 2 != 0) return false;
            } else {
                // For other remainders, count must match the count of k - remainder
                int complement = k - remainder;
                if (frequency.getOrDefault(complement, 0) != count) return false;
            }
        }
        
        return true;
    }
}