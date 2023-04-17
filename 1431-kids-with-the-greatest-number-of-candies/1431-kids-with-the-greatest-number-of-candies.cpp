class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
      int maxx=INT_MIN;
      int n=candies.size();
      vector<bool>ans(n,false);
      for(auto x:candies) maxx=max(maxx,x);
     for(int i=0;i<n;i++)
     {
       if(candies[i]+e>=maxx) ans[i]=true;
     }
        return ans;
    }
};