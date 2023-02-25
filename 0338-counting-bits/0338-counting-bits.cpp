class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
      for(int i=0;i<=n;i++)
      {
        int j=i;
        int c=0;
        while(j)
        {
          if(j&1==1) c++;
          j=j>>1;
        }
        dp[i]=c;
      }
      return dp;
    }
};