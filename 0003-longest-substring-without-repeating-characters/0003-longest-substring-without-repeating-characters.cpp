class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_index;
        int left =0, res=0;
        
        for(int i=0; i<s.size(); i++){
            
            if(last_index.count(s[i])!=0){
                left =max(left, last_index[s[i]]+1);
            }
            
            last_index[s[i]]=i;
            res = max(res, i-left+1);
        }
        
        return res;
    }
};