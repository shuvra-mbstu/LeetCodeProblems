class Solution {
public:
    int removePalindromeSub(string s) {
     int a=0, b=0, ispalindrome=1, len =s.size();

      for(int i=0; i<len; i++){
        if(s[i]=='a')a=1;
        if(s[i]=='b')b=1;
        if(s[i]!=s[len-i-1])ispalindrome = 10000;
              }
      
      return min(ispalindrome, a+b);
    }
};