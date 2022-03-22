class Solution {
public:
    string getSmallestString(int n, int k) {
        int numZ = k/26;
        
        int rem = k%26;
        
        while(numZ + rem < n && numZ>0){
            numZ--;
            rem += 26;
        }
        
        int numA = n-numZ;
        
        string ss = "";
        
        for(int i=1; i<numA; i++) {
            ss += 'a';
            rem--;
        }
        
        if(rem>0)
        ss += ('a' + (rem-1));
        
        for(int i=0; i<numZ; i++) {
            ss += 'z';
        }
        
        return ss;
    }
};