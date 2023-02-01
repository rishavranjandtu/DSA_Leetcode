class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>a;
      int n=ages.size();
      for(int i=0;i<n;i++)
      {
        a.push_back({ages[i],scores[i]});
      }
      int ans=0;
      vector<int>dp(n+1,0);
      sort(a.begin(),a.end());
      for(int i=0;i<n;i++)
      {
        dp[i]=a[i].second;
        for(int j=0;j<i;j++)
        {
          if(a[j].second<=a[i].second)
          {
            dp[i]=max(dp[i],dp[j]+a[i].second);
          }
        }
        ans=max(ans,dp[i]);
      }
      return ans;
    }
};