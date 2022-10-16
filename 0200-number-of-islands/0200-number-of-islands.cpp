
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
int count =0;

for(int I=0; I<grid.size(); I++){
for(int j=0; j<grid[0].size(); j++){
       if(grid[I][j] == '1'){
count ++;
visit(I, j, grid);
    }
  }
}
return count;
    }

void visit( int ind1, int ind2, vector<vector<char>>& grid){
  grid[ind1][ind2] = '0';
  
int x[] = { 0, 0, -1, 1};
int y[] = { -1, 1, 0, 0};
	for(int i=0; i<4; i++){
		
		int x_coordinator = ind1 + x[i];
		int y_coordinator = ind2 + y[i];

		if(x_coordinator < grid.size() && x_coordinator >=0 && y_coordinator < grid[0].size() && y_coordinator>=0 && grid[x_coordinator][y_coordinator] == '1'){
		visit(x_coordinator, y_coordinator, grid);
    }
  }
}

};