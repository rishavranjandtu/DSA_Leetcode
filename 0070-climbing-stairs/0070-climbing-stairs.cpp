class Solution {
public:
    int fun(int n,vector<int>&dp)
    {
      if(n==1||n==2) return n;
      if(dp[n]!=-1) return dp[n];
      return dp[n]=fun(n-1,dp)+fun(n-2,dp);
    }
    int climbStairs(int n) {
      vector<int>dp(n+1,-1);
      return fun(n,dp);
        
    }
};