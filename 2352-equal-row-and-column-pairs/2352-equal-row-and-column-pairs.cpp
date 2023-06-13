class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>v=grid;
      
        int ans=0;
        for(int i=0;i<n;i++)
        {
          for(int j=i;j<n;j++)
          {
            swap(v[i][j],v[j][i]);
          }
        }
      
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            if(v[i]==grid[j]) ans++;
          }
        }
      return ans;
    }
};