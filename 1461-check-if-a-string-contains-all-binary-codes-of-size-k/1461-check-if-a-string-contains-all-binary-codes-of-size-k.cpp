class Solution {
public:
    bool hasAllCodes(string s, int k) {
      int len = s.size();
      
      if(len<k) return false;
      set<string> ss;
      
      for(int i=0; i<len-k+1; i++){
        string a = s.substr(i, k);
        
        ss.insert(a);
        // cout<<a<<" ";
      }
      int val = pow(2,k);
      
      // cout<<endl<<val;
      
      return ss.size() >= val ? true : false;
      
    }
};