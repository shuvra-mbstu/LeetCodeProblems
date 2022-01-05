class Solution {
public:
    vector<vector<string> > answer;
    vector<vector<string>> partition(string s) {
        vector<string> empty;
        
         makePartition(s,0,empty);
        return answer;
    }
    
   void makePartition(string s, int position, vector<string> vt){
        if(s.size() == position){
            answer.push_back(vt);
            return;
        }
       
       for(int i=position; i<s.length(); i++){
           // cout<<s.substr(position, i-position+1)<<" "<<position<<" "<<i<<endl;
          if(isPalindrome(s, position, i)){
              vt.push_back(s.substr(position,i-position+1));
              
              makePartition(s,i+1,vt);
              vt.pop_back();

          }
        }
   }
       
       bool isPalindrome(string s, int start, int end){
           while(start<end){
               if(s[start++] != s[end--])return false;
           }
     return true;
    }
};