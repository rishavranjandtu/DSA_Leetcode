class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
         dp[0][0]=1;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(i==0&&j==0) dp[i][j]=1;
          else
          {
          int up=0;
          int r=0;
          if(i-1>=0) up=dp[i-1][j];
          if(j-1>=0) r=dp[i][j-1];
          dp[i][j]=up+r;
          }
        }
      }
      return dp[n-1][m-1];
    }
};