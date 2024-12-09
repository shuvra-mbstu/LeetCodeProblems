class Solution {
    public boolean[] isArraySpecial(int[] nums, int[][] queries) {
        int[] arr = new int[nums.length];
        arr[0]=0;
        for(int i=1; i<nums.length; i++){
            if(nums[i]%2 == nums[i-1]%2){
                arr[i]= arr[i-1] +1 ;
            }
            else arr[i] = arr[i-1];
        }
        
        boolean[] res = new boolean[queries.length];
        
        for(int i=0; i<queries.length; i++){
            int left = queries[i][0];
            int right = queries[i][1];
            // System.out.println(left +" "+ right + " "+ arr[left]+ " "+ arr[right]);
            res[i] = (arr[right] - arr[left]) == 0;
        }
        return res;
    }
}