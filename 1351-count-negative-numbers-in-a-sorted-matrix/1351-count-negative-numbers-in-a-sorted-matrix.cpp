class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      int m=grid.size();
      int n=grid[0].size();
      int ans=0;
      for(int i=0;i<m;i++)
      {
        int l=0;
        int h=n-1;
        while(l<=h)
        {
          int m=(l+h)/2;
          if(grid[i][m]>=0) l=m+1;
          else h=m-1;
        }
        ans+=(n-h-1);
      }
        return ans;
    }
};