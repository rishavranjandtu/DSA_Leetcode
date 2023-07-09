class Solution {
public:
    bool dfs(vector<vector<int>>&graph,int node,vector<int>&vis,vector<int>&col,int c)
    {
      vis[node]=1;
      col[node]=c;
      c=!c;
      for(auto x:graph[node])
      {
        if(!vis[x])
        {
          if(dfs(graph,x,vis,col,c)==false) return false;
        }
        else if(vis[x]&&col[x]==col[node]) return false;
      }
      return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>vis(n,0);
      vector<int>col(n,-1);
      for(int i=0;i<n;i++)
      {
        if(!vis[i])
          if(dfs(graph,i,vis,col,0)==false) return false;
        
      }
      return true;
    }
};