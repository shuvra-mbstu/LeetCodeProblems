class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count=0;
      
      for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          if(grid[i][j]=='1'){
            count++;
            DFS(i,j, grid);
          }    
        }
      }
      return count;
    }
  
  void DFS(int i, int j, vector<vector<char>> & grid){
    grid[i][j]='0';
    int x[] = {0, 0, 1, -1};
    int y[] = {-1, 1, 0, 0};
    
    for(int a=0; a<4; a++){
      int xx = i + x[a];
      int yy = j + y[a];
      
      if(grid.size() > xx && xx>=0 && yy >=0 && yy < grid[0].size() && grid[xx][yy] == '1'){
        DFS(xx, yy, grid);
      }
    }
  }
};