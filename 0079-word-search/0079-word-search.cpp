class Solution {
public:
  int x[4]={-1,1,0,0};
  int y[4]={0,0,-1,1};
  int k;
  int n;
  int m;
  bool search(int i,int j,vector<vector<char>>& board, string word, int b,vector<vector<int>>&vis )
  {
    if(b==k){ return true;}
    vis[i][j]=1;
    for(int h=0;h<4;h++)
    {
      int r=i+x[h];
      int c=j+y[h];
      if(r>=0&&r<n&&c>=0&&c<m&&board[r][c]==word[b]&&!vis[r][c])
      {
        if(search(r,c,board,word,b+1,vis)==true) return true;
      }
    }
    vis[i][j]=0;
    return false;
    
  }
    bool exist(vector<vector<char>>& board, string word) {
       n=board.size();
       m=board[0].size();
       k=word.size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      int b=0;
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(board[i][j]==word[b]&&!vis[i][j])
          {
            if(search(i,j,board,word,b+1,vis)==true) return true;
            vis[i][j]=0;
          }
        }
      }
      return false;
        
    }
};