class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
      int ans=0;
      int n=prices.size();
      for(int i=0;i<n;i++)
      {
        minn=min(minn,prices[i]);
        ans=max(ans,prices[i]-minn);
      }
      return ans;
    }
};