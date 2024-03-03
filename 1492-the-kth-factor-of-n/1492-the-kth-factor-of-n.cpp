class Solution {
public:
    int kthFactor(int n, int k) {
        int sqrtN = sqrt(n);
        
        set<int> factors;
        factors.insert(n);

        for(int i=1; i<=n; i++){
            if(n%i==0){
                factors.insert(i);
                factors.insert(n/i);
            }
        }
        if(factors.size()<k)return -1;
        
        set<int>::iterator it=factors.begin();
        advance(it, k-1);
               // cout<< *it<<endl;

        return *it;
    }
};