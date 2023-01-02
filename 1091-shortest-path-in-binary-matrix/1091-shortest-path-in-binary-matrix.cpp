class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
         int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
      dis[0][0]=0;
      queue<pair<int,pair<int,int>>>q;
      q.push({1,{0,0}});
      if(grid[0][0]==1) return -1;
      if(n==1&&m==1&&grid[0][0]==0) return 1;
      while(!q.empty())
      {
        int d=q.front().first;
        int r=q.front().second.first;
        int c=q.front().second.second;
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
              if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==0&&1+dis[r][c]<dis[nr][nc])
              {
                if(nr==n-1&&nc==m-1) return d+1;
                dis[nr][nc]=1+dis[r][c];
                q.push({d+1,{nr,nc}});
              }
            }
          }
        }
    
      }
      return -1;
    }
};