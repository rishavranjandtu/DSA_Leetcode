class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      queue<pair<int,int>>q;
      q.push({0,0});
      if(grid[0][0]==1) return -1;
      grid[0][0]=1;
      while(!q.empty())
      {
        
        int r=q.front().first;
        int c=q.front().second;
        if(r==n-1&&c==m-1) return grid[r][c];
        q.pop();
        for(int i=-1;i<=1;i++)
        {
          for(int j=-1;j<=1;j++)
          {
            if(i==0&&j==0) continue;
            else
            {
              int nr=r+i;
              int nc=c+j;
              if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==0)
              {
                q.push({nr,nc});
                grid[nr][nc]=1+grid[r][c];
              }
            }
          }
        }
    
      }
      return -1;
    }
};