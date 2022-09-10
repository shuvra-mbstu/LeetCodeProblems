// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// Used programming language: C++

class Solution {
public:
    int firstBadVersion(int n) {
       int lo = 1, hi = n, mid, ind=1;
      
      while(lo<=hi){
        mid = lo + (hi-lo)/2;
        
        if(isBadVersion(mid)){
          hi = mid-1;
          ind = mid;
        }
        else{
          lo = mid + 1;
        }
      }
      return ind;
    }
};
