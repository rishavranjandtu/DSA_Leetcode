class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int source, int d) {
        //bfs
      unordered_map<int,vector<int>>m;
      queue<int>q;
      for(int i=0;i<e.size();i++)
      {
        m[e[i][0]].push_back(e[i][1]);
        m[e[i][1]].push_back(e[i][0]);
      }
      
      vector<int>vis(n,0);
      q.push(source);
      vis[source]=1;
      while(!q.empty())
      {
        int f=q.front();
        q.pop();
        if(f==d) return true;
        for(auto x:m[f])
        {
          if(!vis[x])
             {
               q.push(x);
            vis[x]=1;
             }
        }
      }
      return false;
    }
};