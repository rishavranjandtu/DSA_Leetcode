class Solution {
public:
  int n;
  int m;
  int dr[4]={0,0,1,-1};
  int dc[4]={-1,1,0,0};
  void dfs(int a, int b, vector<vector<int>>&vis,vector<vector<char>>&board)
  {
    vis[a][b]=1;
    for(int i=0;i<4;i++)
    {
      int x=a+dr[i];
      int y=b+dc[i];
      if(x>=0&&x<n&&y>=0&&y<m&&board[x][y]=='O'&&!vis[x][y])
      {
        dfs(x,y,vis,board);
      }
    }
    
  }
    void solve(vector<vector<char>>& board) {
       n=board.size();
      m=board[0].size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(i==0||i==n-1||j==0||j==m-1)
          {
            if(board[i][j]=='O')
            {
             dfs(i,j,vis,board); 
            }
          }
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(!vis[i][j]&&board[i][j]=='O')
          {
            board[i][j]='X';
          }
        }
      }
        
    }
};