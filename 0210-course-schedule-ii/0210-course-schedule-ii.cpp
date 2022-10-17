class Solution {
public:
int vis[2007];
vector<int>adj[2007], ans;
int notpossible =0;

  vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

    for(int j=0; j<prerequisites.size(); j++){
      adj[prerequisites[j][0]].push_back(prerequisites[j][1]);
    }

    for(int i=0; i<numCourses; i++){
      if(vis[i]==0){
        if (dfs(i)==-1) return {};
      }
    }
    // vector<int> vt;
    // if(notpossible==1)return vt;
    // reverse(ans.begin(), ans.end());
    
    return ans;
  }
  
  int dfs(int i){
    vis[i]=1;
    for(int j=0; j<adj[i].size(); j++){
      if(vis[adj[i][j]]==0){
        if(dfs(adj[i][j])== -1)return -1;
      }
      else if (vis[adj[i][j]]==1) return -1;
    }
    
    vis[i]=2;
    ans.push_back(i);
    return 2;
  }
};