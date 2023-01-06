class Solution {
public:
    int maxIceCream(vector<int>& costs, int c) {
        sort(costs.begin(),costs.end());
      int ans=0;
      for(int i=0;i<costs.size();i++)
      {
        if(costs[i]<=c)
        {
          ans++;
          c=c-costs[i];
        }
      }
      return ans;
    }
};