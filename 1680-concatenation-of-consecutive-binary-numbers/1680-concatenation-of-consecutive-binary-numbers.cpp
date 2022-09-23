class Solution {
public:
    int concatenatedBinary(int n) {
        unsigned long ans = 0, modulo = 1e9 + 7;
        for(int i = 1; i <= n; i++){
            int bits = calculateBitsBinary(i);       
            ans = ((ans << bits)+i) % modulo;          //left shift that can take in the new bits. 
        }
        
        return ans;
    }
    
    int calculateBitsBinary(int n){
        return log2(n) + 1;        //a suggested way to calculate the bits of binary expression in a integer. 
    }
};