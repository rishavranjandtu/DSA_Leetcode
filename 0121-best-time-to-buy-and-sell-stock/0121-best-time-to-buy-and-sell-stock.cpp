class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int minn=INT_MAX;
      int ans=0;
      for(int i=0;i<n;i++)
      {
        minn=min(minn,prices[i]);
        ans=max(ans,prices[i]-minn);
      }
      return ans;
        
    }
};