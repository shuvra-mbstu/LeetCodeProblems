class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int len = manager.size();
        vector<int> adjacent[len+1];
        
        int ans[len+7];
        memset(ans, 0, sizeof(ans));
        
        
        for(int i=0; i<len; i++){
            
            if(manager[i]!=-1){
                adjacent[manager[i]].push_back(i);

            }

        }
        
        queue<int> q;
        
        q.push(headID);
        
        int count = 0;
        
        while(!q.empty()){
            
            int node = q.front();
            q.pop();
                            count = max(ans[node],count);

            if(adjacent[node].size() != 0 ){
                

                for(int j=0; j<adjacent[node].size(); j++){
                    
                    ans[adjacent[node][j]] = ans[node] + informTime[node];
                    
                    q.push(adjacent[node][j]);
                }
            }
        }
        return count;
    }
};
