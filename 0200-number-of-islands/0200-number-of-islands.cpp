class Solution {
public:
  int n;
  int m;
  void bfs(int x, int y, vector<vector<int>>&vis, vector<vector<char>>&grid)
  {
    queue<pair<int,int>>q;
    q.push({x,y});
    while(!q.empty())
    {
      int r=q.front().first;
      int c=q.front().second;
      q.pop();
     int a[4]={0,0,-1,1};
      int b[4]={-1,1,0,0};
      for(int k=0;k<4;k++)
      {
          int nr=r+a[k];
          int nc=c+b[k];
          if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]=='1'&&vis[nr][nc]==0)
          {
            q.push({nr,nc});
            vis[nr][nc]=1;
          }
      }
        
      }
    
  }
    int numIslands(vector<vector<char>>& grid) {
       n=grid.size();
       m=grid[0].size();
      int c=0;
      vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]=='1'&&vis[i][j]==0)
          {
            c++;
            vis[i][j]=1;
            bfs(i,j,vis,grid);
          }
        }
      }
      return c; 
    }
};