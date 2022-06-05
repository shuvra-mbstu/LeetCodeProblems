class Solution {
public:
    bool check(vector<int> &pos, int i){
        for (int j = 0; j < i; j++){
            if (pos[j] == pos[i] || pos[j] + i - j == pos[i] || pos[j] == pos[i] + i - j)
                return false;
        }
        return true;
    }
    
    int puzzle(vector<int> &pos, int i, int n){
        if (i == n)
            return 1;
        int res = 0;
        for (int j = 0; j < n; j++){
            pos[i] = j;
            if (check(pos, i)) res += puzzle(pos, i + 1, n);
        }
        return res;
    }
    
    int totalNQueens(int n) {
        vector<int> pos(n);
        return puzzle(pos, 0, n);
    }
};