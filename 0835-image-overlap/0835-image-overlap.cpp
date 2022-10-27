class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        vector<pair<int, int>>v1, v2;
        
        int len = img1.size();
        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                
                if(img1[i][j]==1){
                    v1.push_back({i, j});
                }
                if(img2[i][j]==1){
                    v2.push_back({i, j});
                }
            }
        }
        
        map<pair<int, int>, int> mpp;
        int ans = 0;
        
        for(auto i : v1){
            for(auto j : v2){
                int x = i.first - j.first;
                int y = i.second - j.second;
                // cout<<x<<y<<endl;
                
                mpp[{x, y}]++;
                
                ans=max(ans, mpp[{x,y}]);
            }
        }
        return ans;
    }
};