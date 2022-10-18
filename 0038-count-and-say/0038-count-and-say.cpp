class Solution {
public:
    string countAndSay(int n) {
        return counting(n);
    }
	
	string counting(int n){
		 if(n==1) return "1";

     string s = counting(n-1);
		 int count =1;
     string ss = "";
		 int len = s.size();
    
    for(int I=1; I<len; I++){
      if(s[I] != s[I-1]){
        ss += to_string(count);
        ss += s[I-1];
        count = 0;
       }
      count ++;
    }
    
    ss += to_string(count);
	  ss += s[len-1];

    return ss;
  }
};
