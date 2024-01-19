class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss = "", tt = "";
        
        int hash =0;
        for(int i =s.size()-1; i>=0; i--){
            
            if(s[i]=='#') hash++;
            else if(!hash){
                ss = s[i] + ss;
            }
            else{
                hash--;
            }
        }
        hash=0;
        for(int i =t.size()-1; i>=0; i--){
            
            if(t[i]=='#') hash++;
            else if(!hash){
                tt = t[i] + tt;
            }
            else{
                hash--;
            }
        }
        // cout<<ss<<" "<<tt<<endl;
        return ss==tt;
    }
};