class Solution {
public:
  bool fun(int i, int j, string a, string b)
  {
    int x=0;
    while(i<=j)
    {
      if(a[i++]!=b[x++]) return false;
    }
    return true;
  }
    int strStr(string a, string b) {
         int n=a.size();
      int m=b.size();
      int i=0;
      int j=m-1;
      while(j<n)
      {
        if(a[i]==b[0]&&a[j]==b[m-1])
        { bool ans=fun(i,j,a,b);
        if(ans==true) return i;
        }
        i++;j++;
      }
      return -1;
    }
};