class Solution {
    public long pickGifts(int[] gifts, int k) {
        PriorityQueue<Integer> giftSet = new PriorityQueue<>((a,b) -> b-a);
        
        for( int gift : gifts){
            giftSet.add(gift);
        }
        
        for(int i=0; i<k; i++){
            if(!giftSet.isEmpty()){
                int value = giftSet.poll();
                int remaining = (int) Math.sqrt(value);
                giftSet.add(remaining);
            }
        }
        
        long total =0;
        
        while(!giftSet.isEmpty()){
            total += giftSet.poll();
        }
        return total;
    }
}