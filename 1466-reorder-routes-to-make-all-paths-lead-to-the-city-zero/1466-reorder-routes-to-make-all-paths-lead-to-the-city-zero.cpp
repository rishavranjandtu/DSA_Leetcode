class Solution {
public:
    int minReorder(int n, vector<vector<int>>& c) {
      vector<vector<int>>adj(n);
      vector<vector<int>>back(n);
      for(int i=0;i<c.size();i++)
      {
        adj[c[i][0]].push_back(c[i][1]);
        back[c[i][1]].push_back(c[i][0]);
      }
      
      queue<int>q;
      q.push(0);
      int ans=0;
      vector<int>vis(n,0);
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        vis[f]=1;
        
        for(auto a:adj[f])
        {
          if(!vis[a])
          {
            ans++;
            q.push(a);
          }
        }
        for(auto a:back[f])
        {
          if(!vis[a]) q.push(a);
        }
      }
      return ans;
        
    }
};