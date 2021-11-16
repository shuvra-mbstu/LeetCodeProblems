class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int coun =0, val=0;
        for(int i=len-1; i>=0; i--){
            if(val && s[i]==' ')return coun;
            
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                val = 1;
                coun++;
            }
        }
        return coun;
    }
};
