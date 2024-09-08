class Solution {
    public int equalPairs(int[][] grid) {
        Map<String, Integer> mpp = new HashMap<>();
        for(int i=0; i<grid.length; i++){
            StringBuilder row= new StringBuilder();
            for(int j=0; j<grid.length; j++){
                row.append(grid[i][j]).append(",");
            }
            String srow = row.toString();
            mpp.put(srow, mpp.getOrDefault(srow, 0)+1);
        }
        
        int count=0;
        for(int i=0; i<grid.length; i++){
            StringBuilder col= new StringBuilder();
            for(int j=0; j<grid.length; j++){
                col.append(grid[j][i]).append(",");
            }
            String scol = col.toString();
            if(mpp.containsKey(scol)){
                count += mpp.get(scol);
            }
        }
        return count;
    }
}