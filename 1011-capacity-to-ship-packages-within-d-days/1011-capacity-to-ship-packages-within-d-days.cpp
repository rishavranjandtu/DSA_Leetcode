class Solution {
public:
    int fun(vector<int>&w,int m)
    {
      int sum=0;
      int c=1;
      for(int i=0;i<w.size();i++)
      {
        if(sum+w[i]<=m) sum+=w[i];
        else {c++; sum=w[i];}
      }
      return c;
    }
    int shipWithinDays(vector<int>& w, int d) {
      int n=w.size();
      int minn=*max_element(w.begin(),w.end());
      int sum=accumulate(w.begin(),w.end(),0);
      
      int l=minn;
      int h=sum;
      int c=0;
      while(l<=h)
      {
        int m=(l+(h-l)/2);
        c=fun(w,m);
        // return m;
         if(c<=d) h=m-1;
        else l=m+1;
      }
      return l;
        
    }
};