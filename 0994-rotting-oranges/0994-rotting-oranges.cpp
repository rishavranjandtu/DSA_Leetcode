class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      queue<pair<pair<int,int>,int>>q;
       vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==2)
          {
            q.push({{i,j},0});
            vis[i][j]==1;
          }
        }
      }
      int dr[4]={0,0,-1,1};
      int dc[4]={-1,1,0,0};
      int t=0;
     
      while(!q.empty())
      {
        int x=q.front().first.first;
        int y=q.front().first.second;
         t=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
          int nr=x+dr[i];
          int nc=y+dc[i];
          if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&!vis[nr][nc])
          {
            vis[nr][nc]=1;
            q.push({{nr,nc},t+1});
          }
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1&&!vis[i][j]) return -1;
        }
      }
      return t;
    }
};