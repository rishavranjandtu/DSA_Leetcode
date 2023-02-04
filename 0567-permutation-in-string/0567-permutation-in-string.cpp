class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int n=s1.size();
      int m=s2.size();
     vector<int>a(26,0);
      for(int i=0;i<n;i++) {a[s1[i]-'a']++;}
      int i=0;
      while(i<=m-n)
      {
        vector<int>b(26,0);
        for(int j=i;j<i+n;j++)
        {
          b[s2[j]-'a']++;
        }
        if(a==b) return true;
        i++;
      }
      return false;
        
    }
};