class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      queue<pair<int,pair<int,int>>>q;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==2)
          {
            q.push({0,{i,j}});
          }
        }
      }
      int r[4]={-1,1,0,0};
      int c[4]={0,0,-1,1};
      int ans=0;
      while(!q.empty())
      {
        auto f=q.front();
        int t=f.first;
        ans=t;
        int x=f.second.first;
        int y=f.second.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
          int nr=x+r[i];
          int nc=y+c[i];
          if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1)
          {
            grid[nr][nc]=2;
            q.push({t+1,{nr,nc}});
          }
        } 
      }
       for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1)
          {
            return -1;
          }
        }
      }
      return ans;
      
        
    }
};