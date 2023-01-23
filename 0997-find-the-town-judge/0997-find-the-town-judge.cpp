class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<vector<int>>adj(n+1);
      for(auto x:trust)
      {
        adj[x[0]].push_back(x[1]);
      }
      vector<int>ind(n+1,0);
      vector<int>out(n+1,0);
      for(int i=1;i<=n;i++)
      {
        for(auto x:adj[i])
        {
          ind[x]++;
        }
        if(adj[i].size()!=0)out[i]++;
      }
      for(int i=1;i<=n;i++)
      {
        if(ind[i]==n-1&&out[i]==0) return i;
      }
      return -1;
    }
};