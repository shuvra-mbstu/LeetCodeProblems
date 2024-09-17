class Solution {
    public int minReorder(int n, int[][] connections) {
        List<List<Integer>>graph = new ArrayList<>();
        
        for(int i=0; i<n; i++){
            graph.add(new ArrayList<>());
        }
        
        for(var edge : connections){
            graph.get(edge[0]).add(edge[1]);
            graph.get(edge[1]).add(-1 * edge[0]);
        }
        return dfs(0, -1, graph);
    }
    
    int dfs(int from, int parent, List<List<Integer>> graph){
        int count =0;
        
        for(var j : graph.get(from)){
            if(Math.abs(j) != parent){
                count += dfs(Math.abs(j), from, graph) + (j>0 ? 1 : 0);
            }
        }
        return count;
    }
}