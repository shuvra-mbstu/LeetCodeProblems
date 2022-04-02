class Solution {
public:
    bool validPalindrome(string s) {
        int lo = 0, hi = s.size()-1;
        bool x = true;
        
        while(lo < hi){
            if(s[lo]!=s[hi]) break;
                lo++;
                hi--;
        }
        
        return validPalindrome(lo+1, hi, s) || validPalindrome(lo, hi-1, s);
    }
    bool validPalindrome(int lo, int hi, string &s){
        while(lo<hi){
            if(s[lo] != s[hi]) return false;
            
            lo++;
            hi--;
        }
        return true;
    }
};