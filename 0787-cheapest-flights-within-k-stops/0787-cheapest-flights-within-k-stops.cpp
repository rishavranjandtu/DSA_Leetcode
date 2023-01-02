class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
      for(int i=0;i<flights.size();i++)
      {
        adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
      }
      queue<pair<int,pair<int,int>>>q;
      q.push({0,{src,0}});
      vector<int>c(n,INT_MAX);
      c[src]=0;
      while(!q.empty())
      {
        int stops=q.front().first;
        int point=q.front().second.first;
        int cost=q.front().second.second;
        q.pop();
        if(stops>k) continue;
        for(auto x:adj[point])
        {
          int adjn=x.first;
          int w=x.second;
          if(cost+w<c[adjn]&&stops<=k)
          {
            c[adjn]=cost+w;
            q.push({stops+1,{adjn,c[adjn]}});
          }
        }
      }
      if(c[dst]==INT_MAX) return -1;
      return c[dst];
    }
};