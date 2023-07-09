class Solution {
public:
    int r[4]={0,0,-1,1};
    int c[4]={-1,1,0,0};
    int m;
  int n;
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int cc)
    {
      image[sr][sc]=color;
      for(int i=0;i<4;i++)
      {
        int nr=sr+r[i];
        int nc=sc+c[i];
        if(nr>=0&&nr<m&&nc>=0&&nc<n&&image[nr][nc]==cc)
        {
          dfs(image,nr,nc,color,cc);
        }
      }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         m=image.size();
         n=image[0].size();
        //ctor<vector<int>>is(m,vector<int>(n,0));
        int c=image[sr][sc];
        if(c==color) return image;
        dfs(image,sr,sc,color,c);
        return image;
    }
};