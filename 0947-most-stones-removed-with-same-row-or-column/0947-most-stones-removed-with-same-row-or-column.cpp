class dsu
{
    public:
    vector<int>p;
    vector<int>s;
    dsu(int n)
    {
        p.resize(n+1,0);
        s.resize(n+1,1);
        for(int i=0;i<=n;i++) p[i]=i;
    }
    int findp(int a)
    {
        if(p[a]==a) return a;
        return p[a]=findp(p[a]);
    }
    void unionbs(int u,int v)
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
    int removeStones(vector<vector<int>>& stones) {
      int maxr=0;
      int maxc=0;
      int m=stones.size();
      for(auto x:stones)
      {
      maxr=max(maxr,x[0]);
      maxc=max(maxc,x[1]);
      }
      
      dsu d(maxr+maxc+1);
      unordered_map<int,int>mm;
      
      for(auto x:stones)
      {
        int r=x[0];
        int c=x[1]+maxr+1;
        int p_r=d.findp(r);
        int p_c=d.findp(c);
        if(p_r==p_c) continue;
        else d.unionbs(p_r,p_c);
        mm[r]=1;
        mm[c]=1;
      }
      int c=0;
      int n=maxr+maxc+1;
      for(auto x:mm)
      {
        int p=d.findp(x.first);
        if(p==x.first) c++;
      }
        return m-c;
    }
};