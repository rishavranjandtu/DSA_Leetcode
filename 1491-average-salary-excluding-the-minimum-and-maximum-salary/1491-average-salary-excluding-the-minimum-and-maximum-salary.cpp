class Solution {
public:
    double average(vector<int>& salary) {
      int n=salary.size();
      double sum;
      int minn=INT_MAX;
      int maxx=INT_MIN;
      for(auto x:salary) 
      {
        sum+=x;
       minn=min(minn,x);
       maxx=max(maxx,x);
      }
      return (sum-minn-maxx)/(n-2);
      
        
    }
};