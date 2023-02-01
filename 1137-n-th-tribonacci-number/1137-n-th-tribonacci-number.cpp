class Solution {
public:
  int tibo(int n,vector<int>&dp)
  {
    if(n==0) return 0;
    else if(n==1||n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=tibo(n-1,dp)+tibo(n-2,dp)+tibo(n-3,dp);
  }
    int tribonacci(int n) {
      vector<int>dp(n+1,-1);
        return tibo(n,dp);
    }
};