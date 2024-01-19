class Solution {
        unordered_map<string, unordered_map<string, double>> graph;
        
    double dfs(string curr, string destination, unordered_set<string> &visited){
        if(curr==destination) return 1;
        
        visited.insert(curr);
        
        for(auto edges : graph[curr]){
            // cout<<edges.first<<" "<<edges.second<<endl;
            
            if(not visited.count(edges.first)){
            double value = dfs(edges.first, destination, visited);
            
                // cout<<curr<<" "<<edges.first<<value<<endl;
                if(value!= -1.0) return value * edges.second;
            }
        }
        return -1.0;
    }

public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res;
        unordered_set<string> visited;
        
        for(int i=0; i<values.size(); i++){
            graph[equations[i][0]][equations[i][1]] = values[i];
            graph[equations[i][1]][equations[i][0]] = 1.0/values[i];
        }
        
        for(int i=0; i<queries.size(); i++){
            
            if(graph.count(queries[i][0]) ==0 || graph.count(queries[i][1]) ==0){
                res.push_back(-1.0);
            }
            else{
                visited.insert(queries[i][0]);
                res.push_back(dfs(queries[i][0], queries[i][1], visited));
                visited.clear();
            }
        }
        return res;
    }
};