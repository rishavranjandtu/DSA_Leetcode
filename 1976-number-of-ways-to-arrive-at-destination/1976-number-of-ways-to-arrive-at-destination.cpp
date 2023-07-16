class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);
        vector<long>time(n,LONG_MAX);
        vector<long>ways(n,0);
        time[0]=0;
        ways[0]=1;
        int m=pow(10,9)+7;
        
      for(auto x:roads)
      {
        adj[x[0]].push_back({x[1],x[2]});
        adj[x[1]].push_back({x[0],x[2]});
      }
        priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>>p;
        p.push({0,0});
        while(!p.empty())
        {
          long t=p.top().first;
          long node=p.top().second;
          p.pop();
          
          for(auto x:adj[node])
          {
            long d=x.second;
            long adjn=x.first;
            if((t+d)<time[adjn])
            {
              time[adjn]=(t+d);
              p.push({t+d,adjn});
              ways[adjn]=ways[node];
            }
            else if(t+d==time[adjn])
            {
               
              ways[adjn]+=ways[node];
              ways[adjn]%=m;
            }
          }
        
      }
      return ways[n-1];
    }
};