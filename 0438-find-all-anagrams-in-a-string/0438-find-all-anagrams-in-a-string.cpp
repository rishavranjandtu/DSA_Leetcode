class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size();
      vector<int>ans;
      vector<int>v(26,0);
      for(int i=0;i<n;i++) v[p[i]-'a']++;
      int i=0;
      int z=s.size();
      while(i<z)
      {
        if(i+n<=z)
        {
          vector<int>a(26,0);
        for(int j=i;j<i+n;j++)
        {
          a[s[j]-'a']++;
        }
          if(a==v) ans.push_back(i);
        }
        i++;
      }
      return ans;
    }
};