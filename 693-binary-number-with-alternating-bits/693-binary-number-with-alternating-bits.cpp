class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        if(n<=2)return true;
    
        long long int value = 2, bit_pos=1, prev=0;
        
        if(n%2)prev=1;
        
        while(n >= value){
            long long int current_bit = (n & (1<<bit_pos));
            
            if(current_bit>0 && prev!=0 || current_bit==prev)return false;
            
            prev = current_bit;
            value*=2;
            bit_pos++;
        }
        return true;
    }
};