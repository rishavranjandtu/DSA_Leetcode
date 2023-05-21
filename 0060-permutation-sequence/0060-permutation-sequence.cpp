class Solution {
public:
    string ans="";
  int perm(int n)
  {
    int i=1;
    for(int j=2;j<=n;j++) i=i*j;
    return i;
  }
    
  void fun(int n,string s, int k, string t)
  {
    if(s.size()==0)
    {
      ans=t;
      return;
    }
    
    
    int p=perm(n);
    int i=k/p;
    t=t+s[i];
    k=k%p;
    s=s.substr(0,i)+s.substr(i+1);
    fun(n-1,s,k,t);
  }
    string getPermutation(int n, int k) {
      string s="";
      string t="";
      int c=0;
      for(char i='1';c<n;i++)
      {
        s=s+(i);
        c++;
      }
      fun(n-1,s,k-1,t);
      return ans;
        
    }
};