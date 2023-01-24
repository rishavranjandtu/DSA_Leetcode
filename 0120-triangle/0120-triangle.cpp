class Solution {
public:
  int rec(int i, int j,vector<vector<int>>&triangle,vector<vector<int>>&dp, int n)
  {
    if(i==n-1) return triangle[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int d=rec(i+1,j,triangle,dp,n)+triangle[i][j];
    int dd=rec(i+1,j+1,triangle,dp,n)+triangle[i][j];
    return dp[i][j]=min(d,dd);
    
  }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return rec(0,0,triangle,dp,n);
    }
};