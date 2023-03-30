class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
      int n=mat.size();
      int t=3;
      if(mat==target) return true;
      while(t!=0)
      {
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<=i;j++)
        {
          swap(mat[i][j],mat[j][i]);
        }
      }
      int mid=n/2;
      for(int i=0;i<mid;i++)
      {
        for(int j=0;j<n;j++)
        {
          swap(mat[j][i],mat[j][n-1-i]);
        }
      }
     
      if(mat==target) return true;
        t--;
      }
      return false;
        
    }
};