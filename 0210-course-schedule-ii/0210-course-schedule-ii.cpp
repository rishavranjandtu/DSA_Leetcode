class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
      vector<int>adj[n];
      vector<int>ans;
      for(auto x:p)
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
      while(!q.empty())
      {
        int f=q.front();
        ans.push_back(f);
        q.pop();
        for(auto x:adj[f])
        {
          ind[x]--;
          if(ind[x]==0) q.push(x);
        }
      }
      
      for(int i=0;i<n;i++)
      {
        if(ind[i]!=0) return {};
      }
        return ans;
    }
};