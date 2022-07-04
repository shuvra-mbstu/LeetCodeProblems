class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n == 1)return 1;
        vector<int>l(n, 1), r(n, 1);
        for(int i = 0; i < n-1; i++){
            if(ratings[i] < ratings[i+1])l[i+1] = l[i] + 1;
        }
        for(int i = n-1; i >= 1; i--){
            if(ratings[i-1] > ratings[i])r[i-1] = r[i] + 1;
        }
        long long int ans = 0;
        for(int i = 0; i < n; i++){
            ans += max(l[i], r[i]);
        }
        return ans;
    }
};