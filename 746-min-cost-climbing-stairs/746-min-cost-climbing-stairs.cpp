class Solution {
public:
  int DP[1007];
  int minCostClimbingStairs(vector<int>& cost) {
    memset(DP, -1, sizeof(DP));
    return min(minCost(cost, 0), minCost(cost, 1));
  }
  int minCost(vector<int>& cost, int ind){
    
    if(ind >= cost.size()) return 0;
    
    if(DP[ind]!= -1) return DP[ind];
    
      DP[ind] = min(minCost(cost, ind+1), minCost(cost, ind+2)) + cost[ind];
        return DP[ind];
  }
};