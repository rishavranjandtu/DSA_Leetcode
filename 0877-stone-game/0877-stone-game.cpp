class Solution {
public:
    int fun(int i, int n, vector<int>&piles,vector<vector<int>>&dp, int c)
    {
      if(i==n)
      {
        return piles[i];
      }
      
      if(dp[i][n]!=-1) return dp[i][n];
      
      if(c==0) dp[i][n]=max(piles[i]+fun(i+1,n,piles,dp,!c),piles[n]+fun(i,n-1,piles,dp,!c));
      else dp[i][n]=max(-piles[i]+fun(i+1,n,piles,dp,!c),-piles[n]+fun(i,n-1,piles,dp,!c));
      return dp[i][n];
      
      
     }
    bool stoneGame(vector<int>& piles) {
      int n=piles.size();
      vector<vector<int>>dp(n,vector<int>(n,-1));
      int a=fun(0,n-1,piles,dp,0);
      if(a>0) return true;
      return false;
        
    }
};