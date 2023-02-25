class Solution {
public:
  int n;
  int fun(int i, int buy, vector<int>&prices,vector<vector<int>>&dp)
  {
    if(i==n) return 0;
    if(dp[i][buy]!=-1) return dp[i][buy];
    int p=0;
    if(buy)
    {
      p=max(-prices[i]+fun(i+1,0,prices,dp),fun(i+1,1,prices,dp));
    }
    else
    {
      p=max(+prices[i]+fun(i+1,1,prices,dp),fun(i+1,0,prices,dp));
    }
    return dp[i][buy]=p;
  }
    int maxProfit(vector<int>& prices) {
       n=prices.size();
      vector<vector<int>>dp(n,vector<int>(2,-1));
      return fun(0,1,prices,dp);
        
    }
};