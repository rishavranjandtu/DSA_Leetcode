class Solution {
public:
  int fun(int i, vector<int>&dp,vector<int>&nums,int n)
  {
    if(i==n-1) return 0;
    if(dp[i]!=-1) return dp[i];
    if(nums[i]==0) return INT_MAX;
    int c=INT_MAX;
    for(int j=1;j<=nums[i];j++)
    {
      if(i+j<n)
      {
      c=min(c,fun(i+j,dp,nums,n));
      }
    }
    if(c==INT_MAX) return dp[i]=INT_MAX;
    return dp[i]=c+1;
   
  }
    int jump(vector<int>& nums) {
        int n=nums.size();
      if(nums[0]==0) return 0;
      vector<int>dp(n,-1);
      return fun(0,dp,nums,n);
    }
};