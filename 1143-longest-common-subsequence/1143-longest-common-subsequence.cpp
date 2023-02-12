class Solution {
public:
  int fun(int i, int j, string a, string b,vector<vector<int>>&dp)
  {
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(a[i]==b[j]) return 1+fun(i-1,j-1,a,b,dp);
    return dp[i][j]=max(fun(i-1,j,a,b,dp),fun(i,j-1,a,b,dp));
  }
    int longestCommonSubsequence(string a, string b) {
      int n=a.size();
      int m=b.size();
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     // return fun(n-1,m-1,text1,text2,dp);
      for(int i=0;i<=n;i++) dp[i][0]=0;
       for(int i=0;i<=m;i++) dp[0][i]=0;
      
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
          if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
          else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
      }
      return dp[n][m];
        
    }
};