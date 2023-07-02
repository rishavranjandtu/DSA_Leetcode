class Solution {
public:
    int fun(vector<int>&b,int mid, int k)
    {
  
      int n=b.size();
      int ans=0;
      int c=0;
      for(int i=0;i<n;i++)
      {
        if(b[i]<=mid)
        {
          c++;
          if(c==k){ans++; c=0;}
        }
        else
        {
           
          c=0;
        }
      }
      return ans;
    }
    int minDays(vector<int>& b, int m, int k) {
      int n=b.size();
        if((long long)m * k>n) return -1;
      int l=*min_element(b.begin(),b.end());
      int h=*max_element(b.begin(),b.end());
      int count=0;
      int ans=0;
      while(l<h)
      {
        int mid=(l+h)/2;
        count=fun(b,mid,k);
       if(count>=m) {ans=mid;h=mid;}
        else l=mid+1;
      }
      return l;
        
    }
};