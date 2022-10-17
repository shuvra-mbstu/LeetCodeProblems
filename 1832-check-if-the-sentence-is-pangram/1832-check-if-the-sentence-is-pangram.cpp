class Solution {
public:
    bool checkIfPangram(string sentence) {
        int track[30];
      memset(track, 0, sizeof(track));
      
      int len = sentence.size(), count=0;
      
      for(int i=0; i<len; i++){
        // cout<<track[sentence[i]-'a']<<endl;
        if(!track[sentence[i]-'a']){
          count ++;
          track[sentence[i]-'a']=1;
        }
      }
      if(count==26)return true;
      
      return false;
    }
};