class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int t) {
        vector<vector<int>>dis(n,vector<int>(n,1e8));
      for(auto x:edges)
      {
        dis[x[0]][x[1]]=x[2];
        dis[x[1]][x[0]]=x[2];
      }
       for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            
            if(i==j) dis[i][j]=0;
         }
        }
      for(int k=0;k<n;k++)
      {
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            
            dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
          }
        }
      }
      
      int siz=n;
      int city=-1;
      for(int i=0;i<n;i++)
      {
        int d=0;
        for(int j=0;j<n;j++)
        {
          if(dis[i][j]<=t)  d++;
        }
        if(d<=siz)
        {
          siz=min(siz,d);
          city=max(city,i);
        }
        
      }
      return city;
    }
};