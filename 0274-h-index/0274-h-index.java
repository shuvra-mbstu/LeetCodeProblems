class Solution {
    public int hIndex(int[] citations) {
        int len = citations.length;
        int[] frequency = new int[len+1];
        
        for(int c : citations){
            if(c>len)frequency[len]++;
            else frequency[c]++;
        }
        
        int count=0;
        
        for(int i=len; i>=0; i--){
            count += frequency[i];
            
            if(count >= i) return i;
        }
        return 0;
    }
}