class Solution {
public:
    int n;
    int m;
    int r[4]={0,0,-1,1};
    int c[4]={-1,1,0,0};
    void dfs(vector<vector<int>>&grid,int x,int y, vector<vector<int>>&vis)
    {
      vis[x][y]=1;
      for(int i=0;i<4;i++)
      {
        int nr=x+r[i];
        int nc=y+c[i];
        if(nr>=0&&nr<m&&nc>=0&&nc<n&&grid[nr][nc]==1&&!vis[nr][nc])
        {
          dfs(grid,nr,nc,vis);
        }
      }
    }
    int numEnclaves(vector<vector<int>>& grid) {
      m=grid.size();
      n=grid[0].size();
      vector<vector<int>>vis(m,vector<int>(n,0));
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(i==0||i==m-1||j==0||j==n-1)
          {
            if(grid[i][j]==1)
            {
              dfs(grid,i,j,vis);
            }
          }
        }
      }
      int ans=0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(grid[i][j]==1&&!vis[i][j]) ans++;
        }
      }
        return ans;
    }
};