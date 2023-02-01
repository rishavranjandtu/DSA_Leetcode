class Solution {
public:
  int fun(int i, int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
  {
    if(i==0&&j==0) return grid[0][0];
    if(dp[i][j]!=-1) return dp[i][j];
    int up=INT_MAX;
    int r=INT_MAX;
    if(i-1>=0) up=grid[i][j]+fun(i-1,j,grid,dp);
    if(j-1>=0) r=grid[i][j]+fun(i,j-1,grid,dp);
    return dp[i][j]=min(up,r);
    
  }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
      int n=grid[0].size();
      vector<vector<int>>dp(m,vector<int>(n,-1));
      return fun(m-1,n-1,grid,dp);
    }
};