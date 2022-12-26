class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
      vector<vector<int>>v(n);
      for(int i=0;i<p.size();i++)
      {
        v[p[i][1]].push_back(p[i][0]);
      }
      
        vector<int>id(n,0);
      for(int i=0;i<n;i++)
      {
        for(auto x:v[i])
        {
          id[x]++;
        }
      }
      vector<int>ans;
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        if(id[i]==0) q.push(i);
      }
      
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(auto x:v[f])
        {
          id[x]--;
          if(id[x]==0) q.push(x);
        }
      }
      if(n==ans.size()) return ans;
      vector<int>k;
      return k;
    }
};