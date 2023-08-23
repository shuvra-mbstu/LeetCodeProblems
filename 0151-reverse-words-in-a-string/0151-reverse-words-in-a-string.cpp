class Solution {
public:
    string reverseWords(string s) {
        string st, ans = "";
        
        stringstream ss(s);
        
        while(ss>>st){
            
            if(ans != "") ans = ' ' + ans;
            
            ans = st + ans;
        }
        return ans;
    }
};