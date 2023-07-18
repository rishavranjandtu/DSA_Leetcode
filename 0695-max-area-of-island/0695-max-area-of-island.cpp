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
        int ua=ulp(a);
        int ub=ulp(b);
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
    //connect grp of island to its p.
      //find ultimate parent //find max size of that parent
      int n=grid.size();
      int m=grid[0].size();
      Dis d(n*m);
     // vector<vector<int>>vis(n,vector<int>(m,0));
      int r[4]={-1,1,0,0};
      int c[4]={0,0,-1,1};
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1)
          {
            int ind=i*m+j;
            for(int k=0;k<4;k++)
            {
              int nr=i+r[k];
              int nc=j+c[k];
              if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1)
              {
               int ind_2=nr*m+nc;
                d.unionbs(ind,ind_2);
              }
            }
          }
        }
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(grid[i][j]==1)
          {
           int p=d.ulp(i*m+j);
            ans=max(ans,d.s[p]);
          }
        }
      }
      
      return ans;
    }
};