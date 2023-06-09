class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        stack<int>s;
        vector<int>l;
        vector<int>r(n,0);
      int ll=0;
      int rr=0;
      for(int i=0;i<n;i++)
      {
        ll=max(ll,h[i]);
        l.push_back(ll);
      }
      stack<int>ss;
      for(int i=n-1;i>=0;i--)
      {
        rr=max(rr,h[i]);
        r[i]=rr;
        
      }
      
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans+=(min(r[i],l[i])-h[i]);
      }
      return ans;
    }
};