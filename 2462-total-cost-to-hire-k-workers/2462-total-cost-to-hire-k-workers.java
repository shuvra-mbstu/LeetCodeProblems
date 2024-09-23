class Solution {
    public long totalCost(int[] costs, int k, int candidates) {
        PriorityQueue<Integer> leftQ = new PriorityQueue<>();
        PriorityQueue<Integer> rightQ = new PriorityQueue<>();
        
        int len = costs.length;
        int left=0, right = len -1;
        
        while(left<candidates && left<=right){
            leftQ.offer(costs[left++]);
        }
        
        while(right >= len-candidates && right>=left){
            rightQ.offer(costs[right--]);
        }
        Long sum=0L;
        for(int i=0; i<k; i++){
            if(!leftQ.isEmpty() && ( rightQ.isEmpty() || leftQ.peek()<= rightQ.peek())){
                sum += leftQ.poll();
                if(left<=right){
                    leftQ.offer(costs[left++]);
                }
            }
            else{
                sum+=rightQ.poll();
                if(right>=left){
                    rightQ.offer(costs[right--]);
                }
            }
        }
        return sum;
    }
}
