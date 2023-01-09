class Solution {
public:
   bool dfs(int f,vector<vector<int>>& graph,vector<int>&col,int c)
   {
     col[f]=c;
     for(auto x:graph[f])
     {
       if(col[x]==-1){
        if(dfs(x,graph,col,!c)==false) return false;
       }
       else if(col[x]==col[f]) return false;
     }
     return true;
   }
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<int>col(n,-1);
      for(int i=0;i<n;i++)
      {
        if(col[i]==-1)
        {
          if(dfs(i,graph,col,0)==false) return false;
        }
      }
        return true;
    }
};