class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size()!=t.size())return false;

      sort(s.begin(), s.end());
      sort(t.begin(), t.end());
            
      int i=0, j=0;
      for(; i<t.size() && j<s.size(); i++, j++){
        if(s[j]!=t[i])return false;
      }
      
      return true;
    }
};