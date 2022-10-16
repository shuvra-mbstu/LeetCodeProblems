class Solution {
public:
	int DP[307][15], len;
  
  int findDifficulty(int ind,  int d, vector<int>& jobDifficulty){

    // cout<<ind<<" "<<d<<endl;
  if(ind >= len || d <= 0) return 1e7;
  
    if (d==1) {
      int maxNum = 0;

      for(int i = ind; i < len; i++){
              maxNum = max(maxNum, jobDifficulty[i]);
       }

           return maxNum;
   }	
  
  if(DP[ind][d] != -1) return DP[ind][d];

  int mxNum = 0;
  int res = INT_MAX;
  for(int i=ind; i<len; i++){
    mxNum = max(mxNum, jobDifficulty[i]);
    
    res = min(res, mxNum + findDifficulty(i+1, d-1, jobDifficulty));
    // cout<<res<<" "<<val<<" "<<i<<" "<<d<<endl;
  }
    //cout<<ind<<" "<<d<<" "<<res<<endl;

      DP[ind][d] = res;
// cout<<ind<<" "<<d<<" "<<res<<endl;
    return DP[ind][d];
  }
  
   	 int minDifficulty(vector<int>& jobDifficulty, int d) {
	    len = jobDifficulty.size();
        
      if(len < d) return -1;

		  memset(DP, -1, sizeof(DP));
		  
       return findDifficulty(0, d, jobDifficulty); 
    }
};