class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
      if(n==1&&edges.size()==0) return {0};
      vector<vector<int>>adj(n);
      for(auto x:edges)
      {
        adj[x[0]].push_back(x[1]);
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
       if(ind[i]==1) q.push(i);
     }
      vector<int>ans;
    while(!q.empty())
    {
      int s=q.size();
      ans.clear();
      while(s!=0)
      {
        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(auto x:adj[f])
        {
          ind[x]--;
          if(ind[x]==1) q.push(x);
        }
        s--;
      } 
    }
      return ans;
    }
};