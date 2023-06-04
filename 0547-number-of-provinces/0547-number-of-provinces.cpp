class Solution {
public:
  void dfs(int x, vector<int>&vis,vector<vector<int>>&adj)
  {
    vis[x]=1;
    for(auto y:adj[x])
    {
      if(!vis[y]) dfs(y,vis,adj);
    }
  }
    int findCircleNum(vector<vector<int>>& is) {
        int n=is.size();
      int ans=0;
      vector<vector<int>>adj(n);
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(is[i][j]==1&&i!=j) adj[i].push_back(j); 
        }
      }
      
      vector<int>vis(n,0);
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
        {
          ans++;
          dfs(i,vis,adj);
        }
      }
      return ans;
    }
};