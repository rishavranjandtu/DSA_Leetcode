class Solution {
public:
  bool fun(int i, int t, vector<int>&nums,vector<vector<int>>&dp)
  {
    if(t==0) return true;
    if(i==0) return nums[0]==t;
    if(dp[i][t]!=-1) return dp[i][t];
    bool nt=fun(i-1,t,nums,dp);
    bool take=false;
    if(nums[i]<=t) take=fun(i-1,t-nums[i],nums,dp);
    return dp[i][t]=nt|take;
  }
    bool canPartition(vector<int>& nums) {
        int sum=0;
      for(auto x:nums) sum+=x;
      int n=nums.size();
      if(sum%2!=0) return false;
      vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
       return fun(n-1,sum/2,nums,dp);
    }
};