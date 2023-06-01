class Solution {
public:
    string longestCommonPrefix(vector<string>&s) {  
      int n=s.size();
      string ans="";
      sort(s.begin(),s.end(),[](string a, string b){return a.size()>b.size();});
      int m=s[0].size();
     // for(auto x:s) m=min(m,x.size());
      string y=s[0];
      for(int i=0;i<m;i++)
      {
        char a=y[i];
        for(int j=0;j<n;j++)
        {
          auto x=s[j];
          if(x[i]!=a) return ans;
        }
        ans+=a;
      }
      return ans;
    }
};