class Solution {
public:
  int fun(int i, int j, string a, string b,vector<vector<int>>&dp)
  {
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(a[i]==b[j]) return fun(i-1,j-1,a,b,dp);
    return dp[i][j]=1+min(fun(i-1,j,a,b,dp),min(fun(i,j-1,a,b,dp),fun(i-1,j-1,a,b,dp)));
  }
    int minDistance(string word1, string word2) {
        int n=word1.size();
      int m=word2.size();
      vector<vector<int>>dp(n,vector<int>(m,-1));
      return fun(n-1,m-1,word1,word2,dp);
    }
};