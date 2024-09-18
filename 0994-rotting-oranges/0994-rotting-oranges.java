class Solution {
    public int orangesRotting(int[][] grid) {
        
        for(int i=0; i< grid.length; i++){
            for(int j=0; j<grid[i].length; j++){
                if(grid[i][j] == (2)){
                    rottingTime(grid, i, j, 2);
                }
            }
        }
        
        int max = 2;
        for(int i=0; i< grid.length; i++){
            for(int j=0; j<grid[i].length; j++){
                if(grid[i][j]==1) return -1;
                max = Math.max(max, grid[i][j]);
            }
        }
        return max-2;
    }
    void rottingTime(int[][] grid, int i, int j, int time){
        if(i>= grid.length || j>=grid[0].length || i<0 || j<0 ||grid[i][j]==0 || (grid[i][j]>1 && grid[i][j]<time)) return;
         
          grid[i][j] = time;
          rottingTime(grid, i+1, j, time+1);
          rottingTime(grid, i, j+1, time+1);
          rottingTime(grid, i-1, j, time+1);
          rottingTime(grid, i, j-1, time+1);        
    } 
}