class Solution {
public:
  int fun(int ind, vector<vector<int>>&dp, bool buy, int n,vector<int>& prices)
  {
    if(ind==n) return 0;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    if(buy) return dp[ind][buy]= max(-prices[ind]+fun(ind+1,dp,0,n,prices),fun(ind+1,dp,1,n,prices));
     return  dp[ind][buy]=max(+prices[ind]+fun(ind+1,dp,1,n,prices),fun(ind+1,dp,0,n,prices));
  }
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
      return fun(0,dp,1,n,prices);
    }
};