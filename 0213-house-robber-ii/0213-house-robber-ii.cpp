class Solution {
public:
  int rec(int i,vector<int>&a,vector<int>&nums,vector<int>&dp)
  {
    if(i==0) return a[0];
    if(dp[i]!=-1) return dp[i];
    int t=a[i];
    if(i>1) t+=rec(i-2,a,nums,dp);
    int nt=rec(i-1,a,nums,dp);
    return dp[i]=max(t,nt);
  }
    int rob(vector<int>& nums) {
      if(nums.size()==1) return nums[0];
        vector<int>a;
      vector<int>b;
      int n=nums.size();
      vector<int>dp1(n,-1);
      vector<int>dp2(n,-1);
      for(int i=0;i<n;i++)
      {
        if(i!=0) a.push_back(nums[i]);
        if(i!=n-1) b.push_back(nums[i]);
      }
      int x=a.size();
      int y=b.size();
      return max(rec(x-1,a,nums,dp1),rec(y-1,b,nums,dp2));
    }
};