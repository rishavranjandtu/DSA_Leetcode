class Solution {
public:
    int strStr(string h, string ne) {
        int n=h.size();
      int m=ne.size();
      for(int i=0;i+m<=n;i++)
      {
        string a=h.substr(i,m);
        if(a==ne) return i;
      }
      return -1;
    }
};