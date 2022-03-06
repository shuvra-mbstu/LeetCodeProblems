class Solution {
public:
    int countOrders(int n) {
        int odd=3, mod=1e9+7;
        long long ans=1;
        for(int i=2; i<=n; i++)
        {
            int sum = i*(2*i-1)%mod;
            
            ans=ans*sum%mod;
        }
        return ans%mod;
    }
}; 