class Solution {
public:
  void dfs(int a, vector<int>&vis, vector<vector<int>>&v)
  {
    vis[a]=1;
    for(auto x:v[a])
    {
      if(!vis[x])
      {
        dfs(x,vis,v);
      }
    }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
      int n=isConnected.size();
      int m=isConnected[0].size();
      int c=0;
      
        vector<vector<int>>v(n);
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(isConnected[i][j]==1)
          {
            v[i].push_back(j);
            v[j].push_back(i);
          }
        }
      }
      
      vector<int>vis(n,0);
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
        {
          c++;
          dfs(i,vis,v);
        }
      }
      return c;
      
    }
};