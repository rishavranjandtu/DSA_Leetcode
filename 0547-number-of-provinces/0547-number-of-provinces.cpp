class Solution {
public:
  void dfs(int s,  vector<vector<int>>&v,vector<int>&vis)
  {
    vis[s]=1;
    for(auto x:v[s])
    {
      if(!vis[x])
      {
        dfs(x,v,vis);
      }
    }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
      int n=isConnected.size();
      vector<vector<int>>v(n);
      vector<int> vis(n,0);
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(isConnected[i][j]==1&&i!=j)
          {
            v[i].push_back(j);
            v[j].push_back(i);
          }
        }
      }
      int c=0;
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
        {
          c++;
          dfs(i,v,vis);
        }
      }
      return c;
        
    }
};