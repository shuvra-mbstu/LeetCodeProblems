class Solution {
    public int numTilings(int n) {
        int[] res = new int[n+3];
        res[1]=1;
        res[2]=2;
        res[3]=5;
        
        int mod = 1000000007;

        for(int i=4; i<=n; i++){
          res[i] = (2*res[i-1]%mod + res[i-3])% mod;
        }
        return res[n];
    }
}