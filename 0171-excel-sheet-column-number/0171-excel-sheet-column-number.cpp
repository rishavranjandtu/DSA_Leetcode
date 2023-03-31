class Solution {
public:
    int titleToNumber(string c) {
      int n=c.size();
      int ans=0;
      int j=0;
      for(int i=n-1;i>=0;i--)
      {
        int a=c[i]-'A';
        a=a+1;
        ans+=pow(26,j++)*a;
      }
      
      
  return ans;
    }
};