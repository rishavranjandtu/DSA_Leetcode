class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      int lr=0;
      int lc=0;
      int hr=n-1;
      int hc=n-1;
      vector<vector<int>>v(n,vector<int>(n,0));
      int k=1;
      while(lr<=hr&&lc<=hc)
      {
      for(int i=lc;i<=hc;i++)
      {
        v[lr][i]=k++;
      }
      lr++;
      for(int i=lr;i<=hr;i++)
      {
        v[i][hc]=k++;
      }
      hc--;
      for(int i=hc;i>=lc;i--)
      {
        v[hr][i]=k++;
      }
      hr--;
      for(int i=hr;i>=lr;i--)
      {
        v[i][lc]=k++;
      }
      lc++;
      }
      return v;
    }
};