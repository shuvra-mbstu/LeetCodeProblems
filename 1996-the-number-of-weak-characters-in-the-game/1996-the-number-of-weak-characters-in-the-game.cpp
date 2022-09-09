class Solution {
public:
  static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0]!=b[0]) return a[0]>b[0];

       return a[1]<b[1];
     }
  
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
      int count=0, mx= -1;
      
      sort(properties.begin(), properties.end(), cmp);
      
      for(auto x:properties){
        if(mx > x[1])count++;
        else mx = x[1];
      }
      return count;
    }
};