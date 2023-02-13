class Solution {
public:
  int fun(int i, vector<int>&prices,vector<vector<int>>&dp,int b,int n)
  {
    if(i==n) return 0;
    if(dp[i][b]!=-1) return dp[i][b];
    int p=0;
    if(b==1)
    {
       p=max(-prices[i]+fun(i+1,prices,dp,0,n),fun(i+1,prices,dp,1,n));
    }
    else
    {
    p= max(prices[i]+fun(i+1,prices,dp,1,n),fun(i+1,prices,dp,0,n));
    }
    return dp[i][b]=p;;
  }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      
      vector<vector<int>>dp(n,vector<int>(2,-1));
      return fun(0,prices,dp,1,n);
    }
};