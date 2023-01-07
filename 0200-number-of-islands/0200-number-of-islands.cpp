class Solution {
public:
  int n;
  int m;
  int dr[4]={0,0,-1,1};
  int dc[4]={-1,1,0,0};
  void dfs(int x,int y,vector<vector<int>>&vis,vector<vector<char>>& grid)
  {
    vis[x][y]=1;
    for(int i=0;i<4;i++)
    {
      int nr=x+dr[i];
      int nc=y+dc[i];
      if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]=='1'&&!vis[nr][nc])
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
          if(grid[i][j]=='1'&&!vis[i][j])
          {
            c++;
            dfs(i,j,vis,grid);
          }
        }
      }
      return c;
    }
};