class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

      int m = matrix.size();
      int n = matrix[0].size();
        
        vector<vector<int>> res(n,vector<int> (m,0)); // matrix creation
      // transpose_vt = matrix;
      // vector<int> vt;
      
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          
          res[j][i] =(matrix[i][j]);
        }
        // transpose_vt.push_back(vt);
        // vt.clear();
      }
      return res;
    }
};