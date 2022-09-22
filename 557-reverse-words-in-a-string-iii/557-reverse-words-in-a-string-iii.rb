class Solution {
public:
    string reverseWords(string s) {
     int len = s.size(), last=0;
      
      for(int i=0; i<=len; i++){
        if(s[i]== ' ' || i == len){
          reverse(s.begin()+last,s.begin()+i);
          // cout<<s<<" ";//<<s.begin()+last+1<<" "<<s.begin()+i<<endl;
          last = i + 1;
        }
      }

      return s;
    }
};