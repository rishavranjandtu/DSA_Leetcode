class Solution {
public:
    int fun(vector<int>&piles,int m)
    {
      int n=piles.size();
      long long ans=0;
      for(int i=0;i<n;i++)
      {
        ans+=(piles[i]+m-1)/m;
      }
     // cout<<ans<<" "<<m<<endl;
      return ans;
    }
    int minEatingSpeed(vector<int>& piles, int t) {
     int n=piles.size();
      int l=1;
      int h=*max_element(piles.begin(),piles.end());
      int c=0;
      int ans=-1;
      while(l<h)
      {
        int m=(l+(h-l)/2);
        c=fun(piles,m);
        if(c<=t) {h=m;}
        else l=m+1;
      }
      return h;
        
    }
};