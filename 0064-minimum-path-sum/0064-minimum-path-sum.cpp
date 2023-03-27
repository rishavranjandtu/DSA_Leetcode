class Solution {
public:
  int n;
  int m;
   int fun(int i,int j, vector<vector<int>>&grid,vector<vector<int>>&dp)
   {
     if(i==0&&j==0) return grid[0][0];
     if(dp[i][j]!=-1) return dp[i][j];
     
     int up=INT_MAX;
     int left=INT_MAX;
     if(i-1>=0) up=grid[i][j]+fun(i-1,j,grid,dp);
      if(j-1>=0) left=grid[i][j]+fun(i,j-1,grid,dp);
     return dp[i][j]=min(up,left);
   }
    int minPathSum(vector<vector<int>>& grid) {
       n=grid.size();
       m=grid[0].size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
      return fun(n-1,m-1,grid,dp);
        
    }
};