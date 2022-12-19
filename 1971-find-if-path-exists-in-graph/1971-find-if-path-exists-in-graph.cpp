class Solution {
public:
  bool dfs(vector<vector<int>>& e, int s, int d,  vector<int>&vis)
  {
    if(s==d) return true;
    if(vis[s]==true) return false;
    vis[s]=1;
    for(auto x:e[s])
    {
      if(!vis[x])
      {
         if(dfs(e,x,d,vis)) return true;
      }
    }
    return false;
  }
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        vector<vector<int>>v(n);
      for(int i=0;i<e.size();i++)
      {
       
          v[e[i][0]].push_back(e[i][1]);
          v[e[i][1]].push_back(e[i][0]);
        
      }
      
      vector<int>vis(n,0);
       return dfs(v,s,d,vis);
    }
};