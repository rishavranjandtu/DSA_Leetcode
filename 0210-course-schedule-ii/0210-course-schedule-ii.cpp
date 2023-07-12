class Solution {
public:
    vector<int> findOrder(int nu, vector<vector<int>>& p) {
        int n=p.size();
      vector<vector<int>>adj(nu);
      vector<int>in(nu,0);
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        adj[p[i][1]].push_back(p[i][0]);
        in[p[i][0]]++;
      }
      for(int i=0;i<nu;i++)
      {
        if(in[i]==0) q.push(i);
      }
      vector<int>ans;
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
      vector<int>d;
      return ans.size()==nu?ans:d;
    
    }
};