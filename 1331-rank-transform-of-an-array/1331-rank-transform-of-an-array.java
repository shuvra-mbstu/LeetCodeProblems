class Solution {
    public int[] arrayRankTransform(int[] arr) {
        Map<Integer, Integer> nums = new HashMap<>();
        int[] result = arr.clone();
        
        Arrays.sort(result);
        
        int count=1;
        for(int i=0; i<arr.length; i++){
            if(!nums.containsKey(result[i])){
                nums.put(result[i], count++);
            }
        }

        for(int i=0; i<arr.length; i++){
            result[i]= nums.get(arr[i]);
        }
        return result;
    }
}