class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
      
      for(int i=0; i<row || i<col; i++){
        vector<int> vt1;
        
        if(i<row){
          int r=i, c=0, ind=0;
        
          while(r<row && c<col){
            vt1.push_back(mat[r++][c++]);
          }

          sort(vt1.begin(), vt1.end());
          r=i, c=0;

          while(r<row && c<col){
            mat[r++][c++]= vt1[ind++];
          }
        }
        
      if(i<col){
          vt1.clear();
          int r=0, c=i, ind=0;
        
          while(r<row && c<col){
            vt1.push_back(mat[r++][c++]);
          }
        
          sort(vt1.begin(), vt1.end());
          r=0, c=i;

          while(r<row && c<col){
            mat[r++][c++]= vt1[ind++];
          }
        }
      }
      
      return mat;
    }
};