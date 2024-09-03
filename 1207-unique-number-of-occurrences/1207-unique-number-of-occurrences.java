class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer, Integer> frequency = new HashMap<>();
        
        for(int i=0; i<arr.length; i++){
            frequency.put(arr[i], frequency.getOrDefault(arr[i], 0)+1);
        }
        Set<Integer> set = new HashSet<>(frequency.values());
        return frequency.size() == set.size();
    }
}