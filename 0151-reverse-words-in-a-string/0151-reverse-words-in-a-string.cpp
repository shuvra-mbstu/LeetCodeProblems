class Solution {
public:
    string reverseWords(string s) {
        int start=0, end=0;
        
        reverse(s.begin(), s.end());
        
        for(; start<s.length() && end<s.length();end++){
            if(s[end]==' '){
                reverse(s.begin()+start,s.begin() + end);
                start = end+1;
            }
            
        }
        reverse(s.begin()+start,s.begin() + end);
        stringstream ss(s);
            
            string st, ans="";
        
            while(ss>>st)
            {
                if(ans!="") ans += ' ';
                
                ans += st;
            }
        return ans;
    }
};