class Solution {
public:
double champagneTower(int poured, int query_row, int query_glass) {
        
       double num[101][101] = {0.0};
    
    num[0][0] = poured;
    
    for(int i=0; i<=query_row; i++){
        for(int j=0; j<=i; j++){
            
            if(num[i][j]>1.0){
                
                num[i+1][j] += (num[i][j] - 1.0)/2.0;
                num[i+1][j+1] += (num[i][j] - 1.0)/2.0;
                num[i][j] = 1.0;
            }
        }
    }
    return num[query_row][query_glass];
    }
};