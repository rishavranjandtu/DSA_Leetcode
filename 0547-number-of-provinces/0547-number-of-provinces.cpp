class Solution {
public:
  void dfs(int s,vector<int>&vis,vector<vector<int>>&adj)
  {
    vis[s]=1;
    for(auto x:adj[s])
    {
      if(!vis[x])
      {
        dfs(x,vis,adj);
      }
    }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
      vector<vector<int>>adj(n);
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
           if(isConnected[i][j]==1&&i!=j) 
           {
             adj[i].push_back(j);
             adj[j].push_back(i);
           }
        }
      }
      int c=0;
      vector<int>vis(n,0);
      for(int i=0;i<adj.size();i++)
      {
        if(!vis[i])
        {
          c++;
          dfs(i,vis,adj);
        }
      }
      return c;
    }
  
};