class Solution {
public:
    bool divisorGame(int n) {
      if(n==1) return false;
      vector<int>dp(n+1,0);
      for(int i=2;i<=n;i++)
      {
        for(int j=1;j<=sqrt(i);j++)
        {
          if(i%j==0&&dp[i-j]==0) dp[i]=true;
        }
      }
        return dp[n]==1;
    }
};