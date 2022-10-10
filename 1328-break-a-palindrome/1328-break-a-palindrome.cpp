class Solution {
public:
    string breakPalindrome(string palindrome) {
      int len =palindrome.size();

      if(len == 1) return "";
      
      int first_half = len/2;
      int second_half = len/2;

      if(len%2 == 0) second_half--;
      
      for(int i=0; i<first_half; i++){
        if(palindrome[i] != 'a'){
          palindrome[i] = 'a';
          return palindrome;
        }
      }

      palindrome[len-1] = 'b';
      
      return palindrome;
    }
};