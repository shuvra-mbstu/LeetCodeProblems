class Solution {
public:
    int removePalindromeSub(string s) {
     int a=0, b=0, ispalindrome=1, len =s.size();

      for(int i=0; i<=len/2; i++){
        if(s[i]=='a' || s[len-i-1] == 'a')a=1;
        if(s[i]=='b'|| s[len-i-1] == 'b')b=1;
        if(s[i]!=s[len-i-1])ispalindrome = 10000;
              }
      
      return min(ispalindrome, a+b);
    }
};