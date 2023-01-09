class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      vector<pair<int,int>>adj[n+1];
      for(int i=0;i<times.size();i++)
      {
        adj[times[i][0]].push_back({times[i][1],times[i][2]});
      }
      vector<int>dis(n+1,INT_MAX);
      dis[k]=0;
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
      p.push({0,k});
      vector<int>vis(n+1,0);
      while(!p.empty())
      {
        int d=p.top().first;
        int node=p.top().second;
        p.pop();
        vis[node]=1;
        for(auto x:adj[node])
        {
          int w=x.second;
          int adjn=x.first;
          if(!vis[adjn]&&d+w<dis[adjn])
          {
            dis[adjn]=d+w;
            p.push({d+w,adjn});
          }
        }
      }
      int ans=0;
      for(int i=1;i<=n;i++)
      {
        if(dis[i]==INT_MAX) return -1;
        else  ans=max(ans,dis[i]);
      }
      return ans;
      
        
    }
};