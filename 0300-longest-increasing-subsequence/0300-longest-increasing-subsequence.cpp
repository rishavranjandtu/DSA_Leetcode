class Solution {
public:
  int fun(int i, int prev,vector<int>&nums,int n,vector<vector<int>>&dp)
  {
    if(i==n) return 0;
    if(dp[i][prev]!=-1) return dp[i][prev];
    int len=fun(i+1,prev,nums,n,dp);
    if(prev==-1||nums[i]>nums[prev]) 
    {
      len=max(len,1+fun(i+1,i,nums,n,dp));
    }
    return dp[i][prev]=len;
  }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
      vector<vector<int>>dp(n+1,vector<int>(n+1,0));
     // return fun(0,-1,nums,n,dp);
      for(int i=n-1;i>=0;i--)
      {
        for(int j=i-1;j>=-1;j--)
        {
          int l=dp[i+1][j+1];
          if(j==-1||nums[i]>nums[j])
          {
            l=max(l,1+dp[i+1][i+1]);
          }
          dp[i][j+1]=l;
        }
      }
      return dp[0][-1+1];
    }
};