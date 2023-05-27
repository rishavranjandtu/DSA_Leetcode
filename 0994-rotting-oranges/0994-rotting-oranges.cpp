class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      queue<pair<int,pair<int,int>>>q;
      vector<vector<int>>vis(n,vector<int>(m,0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==2)
          {
            q.push({0,{i,j}});
            vis[i][j]=1;
            
          }
        }
      }
      
      int ans=0;
      int r[4]={-1,1,0,0};
      int c[4]={0,0,1,-1};
      while(!q.empty())
      {
        auto f=q.front();
        int d=f.first;
        ans=d;
        int x=f.second.first;
        int y=f.second.second;
        q.pop();
        for(int j=0;j<4;j++)
        {
          int nr=x+r[j];
          int nc=y+c[j];
          if(nr>=0&&nr<n&&nc>=0&&nc<m&&!vis[nr][nc]&&grid[nr][nc]==1)
          {
            vis[nr][nc]=1;
            q.push({d+1,{nr,nc}});
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
      return ans;
        
    }
};