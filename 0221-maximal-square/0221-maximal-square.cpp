class Solution {
public:
            int DP[301];

    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int res=0;
        
        int prev=0;
        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                int temp = DP[j];
                
                if(matrix[i-1][j-1]=='1'){
                    DP[j] = min(prev, min(DP[j-1], DP[j]))+1;
                    
                    res = max(res, DP[j]);
                }
                else DP[j] = 0;
                
            prev = temp;
            }
        }
        return res*res;
    }
};