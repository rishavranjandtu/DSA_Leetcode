class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succ, int start, int end) {
        
        vector<vector<pair<double,int>>>adj(n);
        priority_queue<pair<double,int>>p;
        vector<double>m(n,0.0);
      for(int i=0;i<edges.size();i++)
      {
        adj[edges[i][0]].push_back({succ[i],edges[i][1]});
         adj[edges[i][1]].push_back({succ[i],edges[i][0]});
                                   }
        m[start]=1;
            
        p.push({1.0,start});
          while(!p.empty())
            {
              double a=p.top().first;
             int node=p.top().second;
              p.pop();
              
              for(auto x:adj[node])
              {
                if(x.first*a>m[x.second]) 
                {
                  m[x.second] = a * x.first;
                    p.push({m[x.second],x.second});
                
              }
              
            }
                           }
      return m[end];
            
    }
            
};