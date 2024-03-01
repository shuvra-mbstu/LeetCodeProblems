class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> tracking;
        
        int res=0, first=0;
        
        for(int i=0; i<s.size(); i++){
            if(tracking[s[i]]){
                first = max(first, tracking[s[i]]);
            }
            tracking[s[i]]=i+1;

            res = max(res, i-first+1);
            // cout<<res<<" "<<first<<" "<<i<<endl;
        }
        return res;
    }
};