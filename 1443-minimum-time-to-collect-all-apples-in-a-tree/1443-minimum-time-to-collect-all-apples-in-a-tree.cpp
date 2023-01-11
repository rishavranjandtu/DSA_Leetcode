class Solution {
public:
  int ans=0;
  int s=0;
  int dfs(int node, vector<int>&vis,vector<vector<int>>&adj,int cost,vector<bool>&hasApple)
  {
    if(vis[node]!=0) return 0;
    vis[node]=1;
    int cc=0;
    for(auto x:adj[node])
    {
      cc+=dfs(x,vis,adj,2,hasApple);
    }
    if(cc==0&&hasApple[node]==false) return 0;
    return cost+cc;
  }
  
  
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>adj(n);
      for(auto x:edges)
      {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
      }
      vector<int>vis(n,0);
      return dfs(0,vis,adj,0,hasApple);
    }
};