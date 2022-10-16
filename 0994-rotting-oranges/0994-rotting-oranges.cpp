class Solution {
public:
  
  int d[15][15], m, n, fresh = 0;
      queue<pair<int, int>> q;

    int orangesRotting(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        memset(d,0, sizeof(d));
      
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          if(grid[i][j]==2){
            q.push({i, j});
          }

          if(grid[i][j]==1)fresh++;
        }
      }
     int count = BFS(grid);

      if(fresh > 0)return -1;

      if(count==-1)return 0;
      
      return count;
    }
  
  int BFS(vector<vector<int>>& grid){
    int xx[] = {0,0,1,-1};
    int yy[] = {1,-1,0,0};
    
    int count =-1;
    
    while(!q.empty()){
      int size = q.size();
      
      while(size--){

        auto node = q.front();
        q.pop();

        for(int i=0; i<4; i++){
          int a = node.first + xx[i];
          int b = node.second + yy[i];

          if( a<m && a >= 0 && b <n && b >= 0 && grid[a][b]==1){

            fresh--;
            q.push({a,b});
            grid[a][b]=2;
          }
        }
      }
      count++;
    }
    
    return count;
  }
};