class dsu
{
  public:
  vector<int>p;
  vector<int>s;
  dsu(int n)
  {
    s.resize(n,1);
    p.resize(n);
    for(int i=0;i<n;i++) p[i]=i;
  }
  
  int findp(int u)
  {
    if(p[u]==u) return u;
    return p[u]=findp(p[u]);
  }
  
  void unionbysize(int u,int v)
  {
    int p_u=findp(u);
    int p_v=findp(v);
    
    if(p_u==p_v) return;
    if(s[p_u]<s[p_v])
    {
      p[p_u]=p_v;
      s[p_v]+=s[p_u];
    }
    else
    {
      p[p_v]=p_u;
      s[p_u]+=s[p_v];
    }
  }
  
};


class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
      dsu d(n);
      int c=0;
      int m=connections.size();
      for(int i=0;i<m;i++)
      {
        int p_u=d.findp(connections[i][0]);
        int p_v=d.findp(connections[i][1]);
        if(p_u==p_v) c++;
        else d.unionbysize(p_u,p_v);
      }
      set<int>s;
      for(int i=0;i<n;i++)
      {
        s.insert(d.findp(i));
      }
      if(s.size()-1<=c) return s.size()-1;
       return -1;
        
    }
};