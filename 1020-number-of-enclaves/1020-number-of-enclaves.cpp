class Solution {
public:
  int n;
  int m;
  int dr[4]={0,0,1,-1};
  int dc[4]={-1,1,0,0};
  void dfs(int a,int b, vector<vector<int>>&vis,vector<vector<int>>&grid)
  {
    vis[a][b]=1;
    for(int i=0;i<4;i++)
    {
      int x=a+dr[i];
      int y=b+dc[i];
      if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]==1&&!vis[x][y])
      {
        dfs(x,y,vis,grid);
      }
    }
    
  }
    int numEnclaves(vector<vector<int>>& grid) {
      n=grid.size();
      m=grid[0].size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(i==0||i==n-1||j==0||j==m-1)
          {
            if(grid[i][j]==1&&!vis[i][j])
            {
              dfs(i,j,vis,grid);
            }
          }
        }
      }
      int c=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1&&!vis[i][j])
          {
             c++;
          }
        }
      }
      
        return c;
    }
};