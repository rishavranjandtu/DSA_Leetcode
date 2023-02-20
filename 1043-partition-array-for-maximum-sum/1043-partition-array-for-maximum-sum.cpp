class Solution {
public:
  int fun(int i, vector<int>&arr,int n, int k,vector<int>&dp)
  {
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int l=0;
    int maxi=INT_MIN;
    int ans=INT_MIN;
    for(int j=i;j<min(n,i+k);j++)
    {
      l++;
      maxi=max(maxi,arr[j]);
      int sum=l*maxi+fun(j+1,arr,n,k,dp);
      ans=max(ans,sum);
    }
    return dp[i]=ans;
  }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
      vector<int>dp(n,-1);
      return fun(0,arr,n,k,dp);
    }
};