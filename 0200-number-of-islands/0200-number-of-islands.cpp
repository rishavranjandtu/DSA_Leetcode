class Solution {
public:
  int n;
  int m;
  void dfs(int x, int y, vector<vector<int>>&vis, vector<vector<char>>&grid)
  {
    vis[x][y]=1;
    int a[4]={0,0,-1,1};
    int b[4]={-1,1,0,0};
    for(int k=0;k<4;k++)
    {
      int nr=x+a[k];
      int nc=y+b[k];
      if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]=='1')
      {
        dfs(nr,nc,vis,grid);
      }
    }
  }
    int numIslands(vector<vector<char>>& grid) {
      n=grid.size();
      m=grid[0].size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      int c=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(!vis[i][j]&&grid[i][j]=='1')
          {
            c++;
            dfs(i,j,vis,grid);
          }
        }
      }
      return c;
        
    }
};