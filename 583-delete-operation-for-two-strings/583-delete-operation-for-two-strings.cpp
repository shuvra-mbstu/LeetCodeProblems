class Solution {
public:
  
  int DP[505][505];
    int minDistance(string &word1, string &word2) {
      memset(DP, -1, sizeof(DP));
      
      return LCS(word1, word2, 0, 0);
    }

  int LCS(string &s1, string &s2, int ind1, int ind2){
    
    if(ind1 == s1.size() && ind2 == s2.size()) return 0;
      
    if(ind1 == s1.size()) return s2.size()-ind2;
    
    if(ind2 == s2.size())
      return s1.size()-ind1;
        // cout<<ind1<<" "<<ind2<<endl;

    if(s1[ind1] == s2[ind2]) return DP[ind1][ind2] == -1 ? DP[ind1][ind2] = LCS(s1, s2, ind1 + 1, ind2 + 1) : DP[ind1][ind2];
    
    return DP[ind1][ind2] == -1 ? DP[ind1][ind2] = 1 + min(LCS(s1, s2, ind1 + 1, ind2), LCS(s1, s2, ind1, ind2 + 1)) : DP[ind1][ind2];
  }
};