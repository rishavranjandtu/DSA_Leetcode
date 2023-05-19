class Solution {
public:
    bool dfs(int i,vector<vector<int>>& graph,vector<int>&col, int c)
    {
      col[i]=c;
      for(auto x:graph[i])
      {
        if(col[x]==-1)
        {
           if(!dfs(x,graph,col,!c)) return false;
        }
        else if(col[x]==col[i]) return false;
      }
      return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>col(n,-1);
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        if(col[i]==-1)
        {
         if(!dfs(i,graph,col,0)) return false;
        }
    }
      return true;
    }
};