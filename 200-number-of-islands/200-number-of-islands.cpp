class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
      int count =0;
      for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
          
          if(grid[i][j]=='1'){
            count ++;
            DFSvisit(i, j, grid);
          }
        }
      }
        return count;
    }
  
  void DFSvisit(int x, int y, vector<vector<char>>& grid){    
    int ind1[] = {0, 0, -1, 1};
    int ind2[] = {1, -1, 0, 0};
    
    int res = 0;
    grid[x][y] = '0';
    
    for(int i=0; i<4; i++){
      int xx = x+ind1[i];
      int yy = y+ind2[i];
      
      if(xx>=0 && xx<grid.size() && yy >=0 && yy < grid[0].size() && grid[xx][yy]=='1')       {
        DFSvisit(xx, yy, grid);
      }
    }
  }
};