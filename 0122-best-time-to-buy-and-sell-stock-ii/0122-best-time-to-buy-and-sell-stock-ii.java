class Solution {
    public int maxProfit(int[] prices) {
        int min = prices[0], res=0;
        
        for(int i=0; i<prices.length; i++){
            if(prices[i]>min){
                res += (prices[i]-min);
            }
            
                min = prices[i];
        }
        return res;
    }
}