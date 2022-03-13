class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        int len=s.size();
        for(int i=0;i<len;i++){
            if((s[i]==')') ||(s[i]=='}') ||(s[i]==']' )){
                if(sk.empty())return false;
                
                char ch= sk.top();
                sk.pop();
                if(ch=='(' && s[i]!=')')return false;
              
                if(ch=='{' && s[i]!='}')return false;
               
                if(ch=='[' && s[i]!=']')return false;

            }
            else sk.push(s[i]);
        }
                if(sk.empty())return true;
                else return false;
                
    }
};