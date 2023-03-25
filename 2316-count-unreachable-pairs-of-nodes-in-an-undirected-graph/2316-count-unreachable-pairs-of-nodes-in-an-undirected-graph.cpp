class Solution {
public:
  
    void dfs(int n, vector<int>&vis,vector<vector<int>>&adj, int &c)
    {
       vis[n]=1;
       c++;
      for(auto x:adj[n])
      {
        if(!vis[x])
        {
          dfs(x,vis,adj,c);
        }
      }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
      vector<vector<int>>adj(n);
      vector<int>vis(n,0);
     for(auto x:edges)
     {
       adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
     }
      vector<int>v;
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
        {
          int c=0;
          dfs(i,vis,adj,c);
          v.push_back(c);
        }
      }
      
      int m=v.size();
      long long ans=0;
      long long t=0;
      for(int i=0;i<m;i++)
      {
        ans+=(v[i])*(n-v[i]-t);
        t+=v[i];
      }
      return ans;
      
      
      
      
      
        
    }
};