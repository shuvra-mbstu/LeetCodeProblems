class Solution {
public:
    vector<int> countBits(int n) {
        
        int msb = 0;
        int two_p = 2;
        
        vector<int> ans(n+1);
                
        for(int i=1; i<=n; i++){
            int value = i >> 1;
            
            // cout<<value<<endl;
            ans[i] = ans[value];
            
            if(i%2)ans[i]++;
        }
        return ans;
    }
};