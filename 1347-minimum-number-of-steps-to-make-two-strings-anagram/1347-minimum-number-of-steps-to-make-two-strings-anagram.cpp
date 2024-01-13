class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> ss, tt;
        
        int len = s.size();
        
        for(int i=0; i<len; i++){
            ss[s[i]]++;
            tt[t[i]]++;
        }
        
        int count=0;
        for(auto c:ss){
            // cout<< c.first<<" "<<c.second<<endl;
            if(c.second >tt[c.first]){
                count += (c.second-tt[c.first]);
            }
        }
        
        return count;
    }
};