class Solution {
public:
    int minInsertions(string b) {
         string a=b;
      int n=b.size();
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
      reverse(a.begin(),a.end());
     // return fun(n-1,n-1,s,a,dp);
       for(int i=0;i<=n;i++) dp[i][0]=0;
       for(int i=0;i<=n;i++) dp[0][i]=0;
      
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=n;j++)
        {
          if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
          else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
      }
      return n-dp[n][n];
    }
    
};