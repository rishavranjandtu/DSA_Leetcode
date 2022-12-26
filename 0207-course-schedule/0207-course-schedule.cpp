class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>>v(n);
      for(int i=0;i<p.size();i++)
      {
        v[p[i][0]].push_back(p[i][1]);
      }
      vector<int>in(n,0);
      for(int i=0;i<v.size();i++)
      {
        for(auto x:v[i])
        {
          in[x]++;
        }
      }
      queue<int>q;
      for(int i=0;i<n;i++)
      {
        if(in[i]==0) q.push(i);
      }
      vector<int>ans;
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        ans.push_back(f);
        for(auto x:v[f])
        {
          in[x]--;
          if(in[x]==0) q.push(x);
        }
      }
      
      if(ans.size()==n) return true;
      return false;
    }
};