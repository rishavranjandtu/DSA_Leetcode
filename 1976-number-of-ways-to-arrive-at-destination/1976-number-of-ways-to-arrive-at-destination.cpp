class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long,long>>adj[n];
      for(int i=0;i<roads.size();i++)
      {
        adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
         adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
      }
      priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>p;
      p.push({0,0});
      vector<long >ways(n,0);
      vector<long>dis(n,LONG_MAX);
      dis[0]=0;
      ways[0]=1;
      long m=1e9+7;
      while(!p.empty())
      {
        long c=p.top().first;
        long node=p.top().second;
        p.pop();
        for(auto x:adj[node])
        {
          long adjn=x.first;
          long w=x.second;
          if(c+w<dis[adjn])
          {
            ways[adjn]=ways[node];
            dis[adjn]=c+w;
            p.push({c+w,adjn});
          }
          else if(c+w==dis[adjn])
          {
            ways[adjn]=ways[adjn]+(ways[node]);
            ways[adjn]%=m;
          }
        }
      }
      if(ways[n-1]==INT_MAX) return 0;
      return ways[n-1];
    }
};