class Solution {
public:
    
 vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>>mat(n,vector<int>(n));
        
        int l=0,u=0,r=n-1,d=n-1,p=1;
        
        while(l<=r && u<=d)
        {
            for(int col = l;col<=r;col++)
                mat[u][col]=p++;
            
            if(++u>d) break;
            
            for(int row = u;row<=d;row++)
                mat[row][r]=p++;
            
            if(--r<l) break;
            
            for(int col = r;col>=l;col--)
                mat[d][col]=p++;
            
            if(--d<u) break;
            
            for(int row = d;row>=u;row--)
                mat[row][l]=p++;
            
            if(++l>r) break;
            
        }
        return mat;
    }
};