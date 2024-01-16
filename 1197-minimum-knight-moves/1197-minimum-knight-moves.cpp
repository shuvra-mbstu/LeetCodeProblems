class Solution {
public:
    int minKnightMoves(int x, int y) {
     
        vector<pair<int,int>> moves ={{2,-1}, {2, 1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
        
        int xx = abs(x);
        int yy = abs(y);
        
        queue<pair<int, int>> que;
        
        set<pair<int, int>> vis;
        
        int dis = 0;
        
        que.push({0,0});
        vis.insert({0,0});
        
        while(!que.empty()){
            
            int siz = que.size();

            for(int i=0; i<siz; i++){

                auto node = que.front();
                que.pop();

                int indx = node.first;
                int indy = node.second;
            
                if(indx == xx && indy == yy) return dis;
                
                for(auto &j : moves){
                    int nx = indx + j.first;
                    int ny = indy + j.second;
                    
                    if(nx < -2 || ny < -2) continue;
                    if(nx > xx+2 || ny > yy+2) continue;
                    if(vis.find({nx, ny}) != vis.end()) continue;
                    
                    vis.insert({nx, ny});
                    que.push({nx, ny});
                }
                
            }
            dis++;
            
        }
        return 0;
    }
};