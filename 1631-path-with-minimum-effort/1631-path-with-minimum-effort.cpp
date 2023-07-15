class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        vector<vector<int>>ee(n,vector<int>(m,INT_MAX));
        q.push({0,{0,0}});
        int r[4]={-1,1,0,0};
        int c[4]={0,0,-1,1};
        ee[0][0]=0;
        while(!q.empty())
        {
          int e=q.top().first;
          int x=q.top().second.first;
          int y=q.top().second.second;
          q.pop();
          for(int i=0;i<4;i++)
          {
            int nr=x+r[i];
            int nc=y+c[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m)
            {
              int dd=max(e,abs(heights[nr][nc]-heights[x][y]));
              if(dd<ee[nr][nc]){
              ee[nr][nc]=max(e,abs(heights[nr][nc]-heights[x][y]));
              //if(nr==n-1&&nc==m-1) return ee[nr][nc];
              q.push({ee[nr][nc],{nr,nc}});
              }
            }
          }
        }
      return ee[n-1][m-1];
    }
};