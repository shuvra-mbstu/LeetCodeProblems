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

      for(int i=len-1; i>second_half; i--){
        if(palindrome[i] != 'b'){
          palindrome[i] = 'b';
          return palindrome;
        }
      }
      
      return palindrome;
    }
};