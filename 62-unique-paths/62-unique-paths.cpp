class Solution {
public:
    ///////////Dp approach//////////////////
   /* int count_p(int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i>=m||j>=n) return 0;
        
        if(i==m-1&&j==n-1) return 1;
        
        
       if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]= count_p(i+1,j,m,n,dp)+count_p(i,j+1,m,n,dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return count_p(0,0,m,n,dp);
    
    */
    
    //////////////best approach///////////
    int uniquePaths(int m, int n) {
    int N = n+m-2;
        int r = m-1;
        double res = 1;
        
        for(int i=1; i<=r; i++){
            res = res * ( N - r + i) / i;
        }
        
        return (int)res;
    }
    ///////////////////////////////////////
};