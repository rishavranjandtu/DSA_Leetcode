class Solution {
public:
    int closetTarget(vector<string>& words, string target, int s) {
      int n=words.size();
        int i=s;
      int a=0;
      int flag=0;
      for(int j=i;j<=n+s;j++)
      {
       if(words[j%n]==target) { flag=1;break;}
        a++;
      }
      int b=0;
      for(int j=s;j>s-n;j--)
      {
       if(words[(j+n)%n]==target) {flag=1;break;}
        b++;
      }
      if(flag==1)return min(a,b);
      return -1;
    }
};