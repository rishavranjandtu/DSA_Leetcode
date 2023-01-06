class Dis
{
    public:
    vector<int>p;
    vector<int>s;
    Dis(int n)
    {
        p.resize(n);
        s.resize(n,1);
        for(int i=0;i<n;i++) p[i]=i;
    }
    
    int ulp(int x)
    {
        if(p[x]==x) return x;
        return p[x]=ulp(p[x]);
    }
    
    void unionbs(int a,int b)
    {
        int ua=p[a];
        int ub=p[b];
        if(ua==ub) return;
        
        if(s[ua]<s[ub])
        {
            p[ua]=ub;
          s[ub]+=s[ua];
        }
        else 
        {
            p[ub]=ua;
           s[ua]+=s[ub];
        }
    }
};
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      Dis d(n*m);
      set<int>v;
      int dr[4]={0,0,1,-1};
      int dc[4]={-1,1,0,0};
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1)
          {
            int ind_1=i*m+j;
            for(int k=0;k<4;k++)
            {
              int nr=i+dr[k];
              int nc=j+dc[k];
              if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1)
              {
                int ind_2=nr*m+nc;
                if(d.ulp(ind_1)!=d.ulp(ind_2))
                {
                d.unionbs(ind_1,ind_2);
                }
              }
            }

          }
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1)
          {
           v.insert(d.ulp(i*m+j));
          }
        }
      }
      int ans=0;
      for(auto x:v)
      {
        ans=max(ans,d.s[x]);
      }
      return ans;
      
        
        
    }
};