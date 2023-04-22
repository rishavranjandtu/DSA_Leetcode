class Solution {
public:
  int n;
  int m;
  bool check(int i, int j, char ch, vector<vector<char>>&board)
  {
    for(int k=0;k<m;k++)
    {
      if(k!=j&&board[i][k]==ch) return false;
    }
    for(int k=0;k<n;k++)
    {
      if(k!=i&&board[k][j]==ch) return false;
    }
    int x=(i/3)*3;
    int y=(j/3)*3;
    for(int f=x;f<x+3;f++)
    {
      for(int h=y;h<y+3;h++)
      {
        if(f!=i&&h!=j&&board[f][h]==ch) return false;
      }
    }
    return true;
    
  }
  bool fun(int i, int j,vector<vector<char>>& board)
  {
    if(i==n) return true;
    
    if(j==m) return fun(i+1,0,board);
    if(board[i][j]!='.') return fun(i,j+1,board);
    
    for(char ch='1';ch<='9';ch++)
    {
      if(check(i,j,ch,board))
      {
        board[i][j]=ch;
        if(fun(i,j+1,board)==false)
        {
          board[i][j]='.';
        }
        else return true;
      }
    }
    return false;
  }
    void solveSudoku(vector<vector<char>>& board) {
      n=board.size();
      m=board[0].size();
      fun(0,0,board);
     // return board;
        
    }
};