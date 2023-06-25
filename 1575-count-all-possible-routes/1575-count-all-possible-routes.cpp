class Solution {
public:
  int mod=1e9+7;
    int fun(vector<int>&l,int s, int e, int fuel,int n,vector<vector<int>>&dp)
    {
      
      if(fuel<0) return 0;
      
      if(dp[s][fuel]!=-1) return dp[s][fuel];
      
      int ans=0;
      
      if(s==e) ans++;
      
      for(int i=0;i<n;i++)
      {
        if(s!=i)
        {
          ans=(ans%mod+fun(l,i,e,fuel-abs(l[s]-l[i]),n,dp)%mod)%mod;
        }
      }
      return dp[s][fuel]=ans%mod;
      
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n=locations.size();
        vector<vector<int>>dp(n,vector<int>(fuel+1,-1));
        return fun(locations,start,finish,fuel,n,dp);
    }
};