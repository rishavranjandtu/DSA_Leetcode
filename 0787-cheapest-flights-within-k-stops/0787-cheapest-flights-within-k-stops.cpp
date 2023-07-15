class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        int e=flights.size();
      vector<vector<pair<int,int>>>v(n);
      for(int i=0;i<e;i++)
      {
        v[flights[i][0]].push_back({flights[i][1],flights[i][2]});
      }
      queue<pair<int,pair<int,int>>>q;
      vector<int>g(n,INT_MAX);
      q.push({0,{src,0}});
      g[src]=0;
      while(!q.empty())
      {
        int kk=q.front().first;
        int s=q.front().second.first;
        int f=q.front().second.second;
        q.pop();
        if(kk>k) continue;
        //if(s==dst) return f;
        for(auto x:v[s])
        {
          if(f+x.second<g[x.first])
          {
            g[x.first]=f+x.second;
          q.push({kk+1,{x.first,f+x.second}});
          }
        }
        
      }
      return g[dst]==INT_MAX?-1:g[dst];
    }
};