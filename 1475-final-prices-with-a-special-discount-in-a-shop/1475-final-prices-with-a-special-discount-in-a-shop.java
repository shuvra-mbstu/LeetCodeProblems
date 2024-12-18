class Solution {
    public int[] finalPrices(int[] prices) {
        Stack<Integer> st = new Stack <> ();
        
        int[] res = new int[prices.length];
        for(int i = prices.length-1; i>=0; i--){
            while(!st.isEmpty() && st.peek()>prices[i])st.pop();
            
            if(!st.isEmpty()){
                res[i] = prices[i] - st.peek();
            }
            else{
                res[i] = prices[i];
            }
            st.push(prices[i]);
        }
        return res;
    }
}