class Solution {
    public long maxScore(int[] nums1, int[] nums2, int k) {
        int len = nums1.length;
        int[][] pairs = new int[len][2];
        
        for(int i=0; i<len; i++){
            pairs[i][0] = nums2[i];
            pairs[i][1] = nums1[i];
        }
        
        Arrays.sort(pairs, (a,b) ->  b[0] - a[0]);
        PriorityQueue<Integer> pq = new PriorityQueue<>(k);
        long sum =0;
        long maxSum=0;
        
        for(int i=0; i<len; i++){
            int num1 = pairs[i][1];
            int num2 = pairs[i][0];
            
            sum += num1;
            pq.offer(num1);
            
            if(pq.size()>k){
                sum -= pq.poll();
            }
            
            if(pq.size() == k){
                maxSum = Math.max(maxSum, sum*num2);
            }
        }
        return maxSum;
    }
}