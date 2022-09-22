class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
      string x, ans="";
      
      while(ss>>x){
        
        if(ans != ""){
          ans += ' ';
        }
        
        reverse(x.begin(), x.end());
        ans += x;
      }
      return ans;
    }
};