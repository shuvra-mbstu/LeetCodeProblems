class Solution {
public:
    bool isSubsequence(string s, string t)    {
        return checkSubsequence(s,t, 0, 0);
    }
    
    bool checkSubsequence(string &s, string &t, int ind1, int ind2){
        if(ind1 == s.size())return true;
        
        if(s[ind1] == t[ind2]) return checkSubsequence(s,t,ind1+1, ind2+1);
        else if(s[ind1] != t[ind2] && ind2+1 < t.size()){
            return checkSubsequence(s, t, ind1, ind2+1);
        }
        return false;
    }
};