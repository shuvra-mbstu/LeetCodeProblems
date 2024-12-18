class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        List<List<Integer>> graph = new ArrayList<>();
        
         for (int i = 0; i < numCourses; i++) {
            graph.add(new ArrayList<>());
        }
        
        for(int i=0; i<prerequisites.length; i++){
            graph.get(prerequisites[i][1]).add(prerequisites[i][0]);
        }
        int[] visited = new int[numCourses];
        
        for(int i=0; i<numCourses; i++){
            if(visited[i]==0){
                Stack<Integer> stk = new Stack<>();
                stk.push(i);
                
                while(!stk.isEmpty()){
                    
                    int current = stk.peek();
                    System.out.println("current " +current);
                    if(visited[current]==0){
                        visited[current] =1;
                        
                        for(int node : graph.get(current)){
                            if(visited[node]==0){
                                stk.push(node);
                            }
                            else if(visited[node]==1){
                                                    System.out.println("current node " +node);

                                return false;
                            }
                        }
                    }
                    else{
                        stk.pop();
                        visited[current]=2;
                    }
                }
            }
        }
        return true;
    }
}