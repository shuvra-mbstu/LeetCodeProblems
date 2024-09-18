class Solution {
    public double[] calcEquation(List<List<String>> eq, double[] vals, List<List<String>> q) {
        Map<String, Map<String, Double>> equations = new HashMap<>();
     
        for(int i=0; i<eq.size(); i++){
            List<String> currentEq = eq.get(i);
            
            equations.computeIfAbsent(currentEq.get(0), k-> new HashMap<>()).put(currentEq.get(1), vals[i]);
            equations.computeIfAbsent(currentEq.get(1), k-> new HashMap<>()).put(currentEq.get(0), 1.0 /vals[i]);
            //System.out.println("source = "+ currentEq.get(0) +" Des = " + currentEq.get(1) + " val = " + vals[i] + " rev = "+ (1.0 / vals[i]));
        }
        
        double[] res = new double[q.size()];
        for(int i=0; i<q.size(); i++){
            List<String> currentQ = q.get(i);
            
            if(!equations.containsKey(currentQ.get(0)) || !equations.containsKey(currentQ.get(1))){
                res[i] = -1.0;
            }
            else{
                Set<String> visited = new HashSet<>();
                res[i] = dfs(currentQ.get(0), currentQ.get(1), 1.0, equations, visited);
                // System.out.println(res[i]);
            }
        }
        return res;
    }
    double dfs(String currentNode, String destination, double res, Map<String, Map<String, Double>> graph, Set<String>visited){
        // System.out.println("cur "+ currentNode + " des "+ destination +  " res " + res);
        if(currentNode.equals(destination)) return res;
                
        visited.add(currentNode);
        
        Map<String, Double> nextEdges = graph.get(currentNode);
        
        for(String next : nextEdges.keySet()){
            if(!visited.contains(next)){
                double ans = dfs(next, destination, res * nextEdges.get(next), graph, visited);
                             // System.out.println("cur "+ currentNode + " next "+ next + " res " + (res * nextEdges.get(next)+ " res " + ans));
                if(ans != -1.0){
                     // System.out.println("ans "+ ans);
                    return ans;
                }
            }
        }
        // return 1;
        return -1.0;
    }
}