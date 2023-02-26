class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans="";
       // int minl=INT_MAX;
      int n=strs.size();
      if(n==0) return "";
      sort(strs.begin(),strs.end());
      string a=strs[0];
      string b=strs[n-1];
      int minl=min(a.size(),b.size());
      for(int i=0;i<minl;i++)
      {
        if(a[i]==b[i]) ans+=a[i];
        else break;
      }
      return ans;
    }
};