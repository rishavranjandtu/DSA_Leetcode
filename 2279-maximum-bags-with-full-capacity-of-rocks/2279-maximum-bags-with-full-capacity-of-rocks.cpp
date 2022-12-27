class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int a) {
        int n=capacity.size();
      vector<int>diff(n,0);
      for(int i=0;i<n;i++)
      {
        diff[i]=capacity[i]-rocks[i];
      }
      sort(diff.begin(),diff.end());
      int i=0;
      int c=0;
      while(a>0&&i<n)
      {
        if(diff[i]==0) {c++;}
        
        else if(diff[i]<=a)
        {
          a=a-diff[i];
          diff[i]=0;
          c++;
        
        }
        i++;
      }
      return c;
    }
};