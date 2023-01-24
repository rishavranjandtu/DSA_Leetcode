class Solution {
public:
    int rec(int i, int j,vector<vector<int>>&grid, int n,vector<vector<int>>&dp)
    {
      if(i==0&&j==0) return grid[i][j];
      if(dp[i][j]!=-1) return dp[i][j];
      int up=INT_MAX;
      int left=INT_MAX;
      if(i-1>=0)up=rec(i-1,j,grid,n,dp);
     if(j-1>=0) left=rec(i,j-1,grid,n,dp);
      return dp[i][j]=grid[i][j]+min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>dp(n,vector<int>(m,-1));
      dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
            if(i==0&&j==0) dp[i][j]=grid[0][0];
            else
            {
              int up=INT_MAX;
              int left=INT_MAX;
              if(i-1>=0)up=dp[i-1][j];
              if(j-1>=0) left=dp[i][j-1];
              dp[i][j]=grid[i][j]+min(up,left);
            }
          }
        }
      return dp[n-1][m-1];
    }
};