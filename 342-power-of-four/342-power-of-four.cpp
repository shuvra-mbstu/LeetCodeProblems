class Solution {
public:
    bool isPowerOfFour(int n) {
      
      int count = 0, val=0;
      if (n==1) return true;
      if (n<4) return false;

      while(n>=4){
        val += n%4;
        n = n/4;
        count ++;
      }
      return (val == 0 && n==1) ? true : false;
    }
};