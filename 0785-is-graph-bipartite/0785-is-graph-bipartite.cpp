class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
      int n=graph.size();
      queue<int>q;
      vector<int>col(n,-1);
      for(int i=0;i<n;i++)
      {
        if(col[i]==-1)
        {
          q.push(i);
          while(!q.empty())
          {
            int f=q.front();
            q.pop();
            for(auto x:graph[f])
            {
              if(col[x]==-1)
              {
                col[x]=!col[f];
                q.push(x);
              }
              else if(col[x]==col[f]) return false;
            }
          }
        }
      }
      return true;
        
    }
};