class Solution {
public:
  vector<int> dfs(int node, vector<vector<int>>&adj,string &labels,vector<int>&ans,vector<int>&vis)
  {
    vector<int> v(27,0);
    if(vis[node]==1) return v;
    vis[node]=1;
    int ind=labels[node]-'a';
    v[ind]++;
    
    for(auto x:adj[node])
    {
      vector<int>a=dfs(x,adj,labels,ans,vis);
      for(int i=0;i<=26;i++)
      {
        if(a[i]>0) v[i]+=a[i];
      }
    }
    ans[node]=v[labels[node]-'a'];
    return v;
  }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string &labels) {
        vector<vector<int>>adj(n);
      for(auto x:edges)
      {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
      }
      vector<int>ans(n,0);
      vector<int>vis(n,0);
      dfs(0,adj,labels,ans,vis);
      
      return ans;
    }
};