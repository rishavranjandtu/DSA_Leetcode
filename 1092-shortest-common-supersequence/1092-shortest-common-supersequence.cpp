class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
         int n=a.size();
      int m=b.size();
      vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     // return fun(n-1,m-1,text1,text2,dp);
      for(int i=0;i<=n;i++) dp[i][0]=0;
       for(int i=0;i<=m;i++) dp[0][i]=0;
      
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
          if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
          else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
      }
     int i=n,j=m;
        string s="";
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){
                s+=a[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                s+=a[i-1];
                i--;     
            }
            else{
                s+=b[j-1];
                j--;
            }
        }
        cout<<s;
        while(i>0){
            s+=a[i-1];
            i--;
        }
        while(j>0){
            s+=b[j-1];
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};