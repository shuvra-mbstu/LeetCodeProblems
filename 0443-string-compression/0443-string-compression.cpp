class Solution {
public:
    int compress(vector<char>& chars) {
    
        string s="";
      int len = chars.size();
      
      if(len==1)return 1;
      
      for(int i=0; i<len; i++){
        char c = chars[i];
        int coun = 0;
        
        while(i < len && chars[i]==c){
        coun ++;
          i++;
        }
        i--;
        
        s += c;
        if(coun>1){
          s += to_string(coun);
        }
      }
      for(int i=0; i<s.size(); i++){
        chars[i] = s[i];
      }
      return s.size();
    }
};