class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int val=0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') val++;
            else ans += '0';
        }
        
        for(int i=0; i<val; i++){
            if(i==0) ans += '1';
            else ans = '1' + ans;
        }
        return ans;
    }
};