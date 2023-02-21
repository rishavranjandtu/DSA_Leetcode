class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l=0;
      int e=a.size()-1;
      if(a.size()==1) return a[0];
      while(l<=e)
      {
        int m=(l+e)/2;
        if(m%2==0)
        {
          if(a[m]==a[m+1]) l=m+1;
          else e=m-1;
        }
        else
        {
          if(a[m]!=a[m+1]) l=m+1;
          else e=m-1;
        }
      }
      return a[l];
    }
};