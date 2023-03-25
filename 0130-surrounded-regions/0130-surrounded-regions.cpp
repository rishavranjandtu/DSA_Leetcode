class Solution {
public:
  int n;
  int m;
  int a[4]={0,0,-1,1};
  int b[4]={-1,1,0,0};
   void dfs(int x, int y, vector<vector<int>>&vis, vector<vector<char>>&board)
   {
     vis[x][y]=1;
  for(int i=0;i<4;i++)
   {
    int nr=x+a[i];
    int nc=y+b[i];
    if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&board[nr][nc]=='O')
    {
        dfs(nr,nc,vis,board);
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
            if(board[i][j]=='O'&&!vis[i][j])
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