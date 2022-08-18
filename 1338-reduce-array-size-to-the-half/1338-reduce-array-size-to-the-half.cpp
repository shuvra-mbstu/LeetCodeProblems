bool cmp (pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
  }
  
class Solution {
public:
  unordered_map<int,int> mpp;
  
    int minSetSize(vector<int>& arr) {
        
      int len = arr.size();
      
      for(int i=0; i<len; i++){
        mpp[arr[i]]++;
      }
      
      vector<pair<int,int>> vt;
      
      
      int count = 0, ans=0;
      
      for(auto i : mpp){
        vt.push_back({i.first, i.second});
      }
      
      sort(vt.begin(), vt.end(), cmp);
      
      for(auto i : vt){
        ans++;
        count += i.second;
        if(count >= len/2)return ans;
      }
      
      return 0;
    }
};