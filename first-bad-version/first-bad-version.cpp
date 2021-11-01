// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// Used programming language: C++

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
      while(left < right){
        
        int mid = left + (right-left) / 2;
        
        if(isBadVersion(mid)){
          right = mid;
        }
        else left = mid + 1;
      }
      return left;
    }
};

// Time Complexity: O(N) where N is the size of the array
// Space Complexity: O(1)