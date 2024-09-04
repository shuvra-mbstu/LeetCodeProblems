class Solution {
    public int[] countBits(int n) {
        int[] count = new int[n+1];
        
        count[0]=0;
        int pow =1;
        
        for(int i=1, t=0; i<=n; i++,t++){
            if(i==pow){
                pow *=2;
                t=0;
            }
            count[i] = count[t]+1;
        }
        return count;
    }
}