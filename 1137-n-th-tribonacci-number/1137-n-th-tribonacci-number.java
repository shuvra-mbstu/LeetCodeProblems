class Solution {
    public int tribonacci(int n) {
        int[] res = new int[n+3];
        res[0]=0;
        res[1]=1;
        res[2]=1;
        for(int i=3; i<=n; i++){
            res[i]= res[i-1]+res[i-2]+res[i-3];
        }
        
        return res[n];
    }
}