class Solution {
    
    unordered_map<string, int> DP;
    
    int dfs(int x, int y){
        string s = to_string(x) + "#" + to_string(y);
        
        // cout<<s<<endl;
        if(DP.find(s) != DP.end()) return DP[s];
        
        if(x+y == 0) return 0;
        if(x+y == 2) return 2;
        
        return DP[s] = min(dfs(abs(x-2), abs(y-1)), dfs(abs(x-1), abs(y-2))) +1;
    }
public:

    int minKnightMoves(int x, int y) {        
        return dfs(abs(x), abs(y));
    }
};