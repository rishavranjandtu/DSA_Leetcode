class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
      int maxx=INT_MIN;
      int sum=0;
      for(auto x:weights)
      {
        sum+=x;
        maxx=max(maxx,x);
      }if(days==1) return sum;
      if(days==n) return maxx;
      int a=INT_MAX;
      int l=maxx;
      int r=sum;
      while(l<=r)
      {
        int m=(l+r)/2;
        int d=1;
        int s=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
          if(s+weights[i]<=m) s+=weights[i];
          else
          {
            ans=max(ans,s);
            //m=min(m,s);
            s=weights[i];
            d++;
           // m=min(m,s);
          }
        }
       // if(s!=0) d++;
        
        if(d<=days) {a=min(a,ans); r=m-1;}
        else l=m+1;
      }
      //cout<<
      return a;
    }
};