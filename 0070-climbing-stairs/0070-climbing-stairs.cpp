class Solution {
public:
    int h(int n, vector<int>&dp,int i)
    {
      if(i==0||i==1) return 1;
      
      if(dp[i]!=-1) return dp[i];
      return dp[i]=h(n,dp,i-1)+h(n,dp,i-2);
    }
    int climbStairs(int n) {
      vector<int>dp(46,-1);
      int ans=h(n,dp,n);
        return ans;
    }
};