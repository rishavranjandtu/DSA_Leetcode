class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
      vector<vector<int>>adj(n);
      for(auto x:pre)
      {
        adj[x[1]].push_back(x[0]);
      }
      vector<int>ind(n,0);
      for(int i=0;i<n;i++)
      {
        for(auto x:adj[i])
        {
          ind[x]++;
        }
      }
      
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        if(ind[i]==0) q.push(i);
      }
      vector<int>ans;
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(auto x:adj[f])
        {
          ind[x]--;
          if(ind[x]==0) q.push(x);
        }
        
      }
      if(ans.size()==n) return true;
      return false;
        
    }
};