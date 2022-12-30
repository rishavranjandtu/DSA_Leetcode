class Solution {
public:
     vector<vector<int>>ans;
  void dfs(int a,int n,vector<vector<int>>& graph,vector<int>&v,vector<int>&vis)
  {
    vis[a]=1;
    v.push_back(a);
    if(a==n-1) {ans.push_back(v);
                
    return;}
    for(auto x:graph[a])
    {
      if(!vis[x])
      {
        dfs(x,n,graph,v,vis);
        vis[x]=0;
      }
      v.pop_back();
    }
  }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>vis(n,0);
      vector<int>v;
      dfs(0,n,graph,v,vis);
      return ans;
        
    }
};