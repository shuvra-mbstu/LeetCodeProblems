class Solution {
public:
    int minSteps(string s, string t) {
        int count[27] = {0};
        
        int len = s.size();
        
        for(int i=0; i<len; i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        int res=0;
        for(int c=0; c<27; c++){
            // cout<< c.first<<" "<<c.second<<endl;
            // if(c.second >tt[c.first]){
            //     count += (c.second-tt[c.first]);
            // }
            
            if(count[c]>0)
            res += count[c];
        }
        
        return res;
    }
};