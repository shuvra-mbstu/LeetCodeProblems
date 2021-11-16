class Solution {
public:
    int secondHighest(string s) {
        int sec = -1, fst = -1;
        int len = s.size();
        
        for(int i=0; i<len; i++){
            
            int val = (s[i]-'0');
            
            if(val>=0 && val<=9){
                if( val> fst){
                sec = fst;
                fst =val;
                }
                else if(val>sec && val!=fst){
                    sec = val;
                }
            }
        }
        return sec;
    }
};