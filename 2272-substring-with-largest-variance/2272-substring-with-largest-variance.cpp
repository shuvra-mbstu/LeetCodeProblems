class Solution {
public:
    int largestVariance(string s) {
       unordered_set<char> ss(begin(s), end(s));
        
        int ans = 0;
        
        for(auto a : ss){
            for(auto b : ss){
                if(a==b) continue;
                
                int countA=0, countB=0;
                
                for(auto i : s){
                
                    countA += (i==a) ? 1 : 0;
                    
                    countB += (i==b) ? 1 : 0;
                    
                    ans = max(ans, countB>0 ? countA-countB : countA-countB-1);
                    
                    if(countA-countB < 0){
                        countA =0;
                        countB =0;
                    }
                }
            }
        }
        return ans;
    }
};