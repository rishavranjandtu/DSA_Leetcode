class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
      int n=s.size();
      sort(s.begin(),s.end());
      string a=s[0];
      string b=s[n-1];
      int m=min(a.size(),b.size());
      string ans="";
      for(int i=0;i<m;i++)
      {
        if(a[i]==b[i]) ans+=a[i];
        else break;
      }
        return ans;
    }
};