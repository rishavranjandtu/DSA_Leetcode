class Solution {
public:
  int dr[4]={0,0,-1,1};
  int dc[4]={1,-1,0,0};
  int n;
  int m;
  void dfs(int sr, int sc, int c, vector<vector<int>>&ans,vector<vector<int>>& image, vector<vector<int>>&vis,int a)
  {
    ans[sr][sc]=c;
    vis[sr][sc]=1;
    for(int i=0;i<4;i++)
    {
      int x=sr+dr[i];
      int y=sc+dc[i];
      if(x>=0&&x<n&&y>=0&&y<m&&image[x][y]==a&&!vis[x][y])
      {
        dfs(x,y,c,ans,image,vis,a);
      }
    }
    
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int c) {
         n=image.size();
       m=image[0].size();
      vector<vector<int>>ans=image;
      vector<vector<int>>vis(n,vector<int>(m,0));
      int a=image[sr][sc];
      dfs(sr,sc,c,ans,image,vis,a);
      return ans;
    }
};