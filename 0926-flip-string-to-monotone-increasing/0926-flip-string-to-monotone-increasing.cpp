class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int z1=0;
      int z2=0;
      int n=s.size();
      for(int i=0;i<n;i++)
      {
        if(s[i]=='1') z1++;
        else z2++;
        z2=min(z1,z2);
        }
      return z2;
    }
};