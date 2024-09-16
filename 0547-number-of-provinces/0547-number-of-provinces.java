class Solution {
    public int findCircleNum(int[][] isConnected) {
        int len = isConnected.length;
        
        boolean[] visited = new boolean[len];
        int count=0;
        for(int i=0; i<len; i++){
            if(!visited[i]){
                count++;
                findConnectedNode(isConnected, visited, i);
            }
        }
        return count;
    }
    void findConnectedNode(int[][] isConnected, boolean[] visited, int indx){
        visited[indx]=true;
        
        for(int i=0; i<isConnected.length; i++){
            if(!visited[i] && isConnected[indx][i]==1){
                findConnectedNode(isConnected, visited, i);
            }
        }
    }
}