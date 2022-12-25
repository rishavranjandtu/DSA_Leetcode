class Solution {
public:
  int n;
  int m;
  bool dfs(int a,vector<int>&vis,vector<vector<int>>& graph,int c,vector<int>&col)
  {
    vis[a]=1;
    col[a]=c;
    for(auto x:graph[a])
    {
      if(!vis[x])
      {
        if(!dfs(x,vis,graph,!c,col)) return false;
      }
      else if (col[x]==c) return false;
    }
    return true;
  }
    bool isBipartite(vector<vector<int>>& graph) {
        n=graph.size();
        m=graph[0].size();
      vector<int>vis(n,0);
      vector<int>col(n,0);
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
        {
          if(!dfs(i,vis,graph,0,col)) return false;
        }
      }
      return true;
    }
};