class Solution {
public:
    int r[4]={-1,1,0,0};
    int c[4]={0,0,-1,1};
    int n;
    int m;
    void dfs(vector<vector<char>>&board,int x,int y,vector<vector<int>>&vis)
    {
      vis[x][y]=1;
      for(int i=0;i<4;i++)
      {
        int nr=x+r[i];
        int nc=y+c[i];
        if(nr>=0&&nr<m&&nc>=0&&nc<n&&board[nr][nc]=='O'&&!vis[nr][nc])
        {
          dfs(board,nr,nc,vis);
        }
      }
    }
     void dfs2(vector<vector<char>>&board,int x,int y,vector<vector<int>>&vis)
    {
      vis[x][y]=1;
       board[x][y]='X';
      for(int i=0;i<4;i++)
      {
        int nr=x+r[i];
        int nc=y+c[i];
        if(nr>=0&&nr<m&&nc>=0&&nc<n&&board[nr][nc]=='O'&&!vis[nr][nc])
        {
          dfs2(board,nr,nc,vis);
        }
      }
    }
    void solve(vector<vector<char>>& board) {
         m=board.size();
         n=board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
            if(i==0||i==m-1||j==0||j==n-1)
            {
             if(board[i][j]=='O')
              {
                dfs(board,i,j,vis);
              }
            }
          }
        }
      
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(board[i][j]=='O'&&!vis[i][j])
          {
            dfs2(board,i,j,vis);
          }
        }
      }
    }
};