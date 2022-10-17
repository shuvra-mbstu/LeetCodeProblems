class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        int len = damage.size();
      
      long long int count =0, mxNum=-1;
      
      for(int i=0; i<len; i++){
        count += damage[i];
        mxNum = max((int)mxNum, damage[i]);
      }
      
      mxNum = min((int)mxNum, armor);
      
      return count - mxNum +1;
    }
};