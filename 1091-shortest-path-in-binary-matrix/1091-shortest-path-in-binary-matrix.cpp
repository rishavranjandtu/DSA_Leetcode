class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        queue<pair<int,int>>q;
      q.push({0,0});
      if(grid[0][0]==1||grid[n-1][n-1]==1) return -1;
      grid[0][0]=1;
      while(!q.empty())
      {
        auto f=q.front();
        int x=f.first;
        int y=f.second;
        if(x==n-1&&y==n-1) return grid[x][y];
        q.pop();
        
        for(int i=-1;i<=1;i++)
        {
          for(int j=-1;j<=1;j++)
          {
            if(i==0&&j==0) continue;
            else
            {
              int nr=x+i;
              int nc=y+j;
              if(nr>=0&&nr<n&&nc>=0&&nc<n&&grid[nr][nc]==0)
              {
                grid[nr][nc]=1+grid[x][y];
                q.push({nr,nc});
              }
            }
          }
        }
      }
      return -1;
    }
};