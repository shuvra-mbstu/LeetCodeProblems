class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> mpp;
        
        int len = s.size();
        int start =0, count=1;
        mpp[s[0]]=1;
        
        for(int i=1; i<len; i++){
            if(mpp[s[i]]-1 >=start){
                start = i;
                count++;
            }
            // cout<<count<<" "<<i<<endl;
            mpp[s[i]] = i+1;
        }
        return count;
    }
};