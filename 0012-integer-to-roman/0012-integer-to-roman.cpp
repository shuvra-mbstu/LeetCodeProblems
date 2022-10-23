class Solution {
public:
    string intToRoman(int num) {
      
      map<int, string> mpp;
      
      mpp[1] = "I";
      mpp[4] = "IV";
      mpp[5] = "V";
      mpp[9] = "IX";
      mpp[10] = "X";
      mpp[40] = "XL";
      mpp[50] = "L";
      mpp[90] = "XC";
      mpp[100] = "C";
      mpp[400] = "CD";
      mpp[500] = "D";
      mpp[900] = "CM";
      mpp[1000] = "M";

      auto i=mpp.rbegin();
      string ans = "";
      
      while(num>0){
        if(num >= i->first){
          ans += i->second;
          num -= i->first;

          // cout<<num<<" "<<ans<<endl;
        }
        else i++;
        
      }
        return ans;
    }
  
};