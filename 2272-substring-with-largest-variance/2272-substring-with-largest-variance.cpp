class Solution {
public:
  int calculate(char a, char b, string& s){
    int coun=0, mx=0, foundB=0;
    
    for(auto i : s){
      if(i != a && i != b)continue;
      
      if(i==b)foundB=1;
      
      coun +=(i == a) ? 1 : -1;
      
      if(coun <0) {
        coun =0;
        foundB =0;
      }

      mx = foundB==0 ? max(mx, coun-1) : max(mx, coun);
      
    }
    
    return mx;
  }
    int largestVariance(string s) {
        unordered_set<char> ch(rbegin(s), rend(s));
      int ans =0;
      
      for(auto i : ch){
        for(auto j : ch){
          if(i==j) continue;
          
          ans = max(ans, calculate(i, j, s));
        }
      }
      return ans;
    }
};