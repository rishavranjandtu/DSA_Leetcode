class Dis
{
    public:
    vector<int>p;
    vector<int>rank;
    Dis(int n)
    {
        p.resize(n);
        rank.resize(n,1);
        for(int i=0;i<n;i++) p[i]=i;
    }
    
    int ulp(int x)
    {
        if(p[x]==x) return x;
        return p[x]=ulp(p[x]);
    }
    
    void unionbr(int a,int b)
    {
        int ua=p[a];
        int ub=p[b];
        if(ua==ub) return;
        
        if(rank[ua]<rank[ub])
        {
            p[ua]=ub;
        }
        else  if(rank[ua]>rank[ub])
        {
            p[ub]=ua;
        }
        else  if(rank[ua]==rank[ub])
        {
            p[ub]=ua;
            rank[ub]++;
            
        }
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& c) {
      Dis o(n);
      int ee=0;
      for(int i=0;i<c.size();i++)
      {
        if(o.ulp(c[i][0])!=o.ulp(c[i][1]))
        {
        o.unionbr(c[i][0],c[i][1]);
        }
        else ee++;
        
      }
      int dc=0;
      for(int i=0;i<n;i++)
      {
        if(o.ulp(i)==i) dc++;
      }
      if(dc-1<=ee) return dc-1;
      return -1;
        
    }
};