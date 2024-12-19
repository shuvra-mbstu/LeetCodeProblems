class Solution {
    public int maxChunksToSorted(int[] arr) {
        int count=0;
        int max =0;
            for(int j=0; j<arr.length; j++){
                max = Math.max(arr[j], max);
                if(max==j){
                    count ++;
                }
            }
        return count;
    }
}