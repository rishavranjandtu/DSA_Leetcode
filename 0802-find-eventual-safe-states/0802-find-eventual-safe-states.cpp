class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int n=graph.size();
      vector<vector<int>>adj(n);
      vector<int>in(n,0);
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        for(auto x:graph[i])
        {
          adj[x].push_back(i);
          in[i]++;
        }
      }
      vector<int>ans;
      for(int i=0;i<n;i++)
      {
        if(in[i]==0) q.push(i);
      }
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(auto x:adj[f])
        {
          in[x]--;
          if(in[x]==0) q.push(x);
        }
      }
      sort(ans.begin(),ans.end());
      return ans;
        
    }
};