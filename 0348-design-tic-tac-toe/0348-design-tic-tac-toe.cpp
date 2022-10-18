class TicTacToe {
public:
  
int Row[107][3], Col[107][3], crosl[4], crosr[4], len;
    TicTacToe(int n) {
      len = n;
      memset(Row, 0, sizeof(Row));
      memset(Col, 0, sizeof(Col));
      crosl[1]=0;
      crosl[2]=0;
      crosr[1]=0;
      crosr[2]=0;
    }
  
    int move(int row, int col, int player) {
      Row[row][player]++;
      
      Col[col][player]++;
      
      if(row==col) crosl[player]++;
      
      if(row+col == len-1) crosr[player]++;
      
      if(Row[row][player] == len || Col[col][player] == len || crosl[player] == len || crosr[player] == len) return player;
      
      return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */