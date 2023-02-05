class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>a(26,0);
      vector<int>b(26,0);
      int n=s.size();
      int m=t.size();
      for(int i=0;i<n;i++) a[s[i]-'a']++;
      for(int i=0;i<m;i++) b[t[i]-'a']++;
      if(a==b) return true;
      return false;
    }
};