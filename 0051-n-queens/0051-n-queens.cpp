class Solution {
public:
   vector<vector<string>>ans;
  bool check(int i, int j,vector<string>&v, int n)
  {
    int x=i-1;
    int y=j-1;
    while(x>=0&&y>=0)
    {
      if(v[x][y]=='Q') return false;
      x--;
      y--;
    }
    x=i-1;
    y=j+1;
    while(x>=0&&y<n)
    {
      if(v[x][y]=='Q') return false;
      x--;
      y++;
    }
    x=i-1;
    y=j;
    while(x>=0)
    {
      if(v[x][y]=='Q') return false;
      x--;
    }
    return true;
    
  }
  bool fun(int i, int j, vector<string>&v, int n)
  {
    if(i==n)
    {
      ans.push_back(v);
      return false;
    }
    
    for(int k=0;k<n;k++)
    {
      if(check(i,k,v,n))
      {
        v[i][k]='Q';
        if(fun(i+1,k,v,n)==false)
        {
          v[i][k]='.';
        }
        else return true;
      }
    }
    return false;
  }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>v(n,string(n,'.'));
      fun(0,-1,v,n);
      return ans;
    }
};