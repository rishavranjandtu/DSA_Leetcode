class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       // int minl=INT_MAX;
      int n=strs.size();
      string ans="";
      sort(strs.begin(),strs.end());
      int minl=strs[0].size();
      for(int i=0;i<minl;i++)
      {
        int c=0;
        string h=strs[0];
        char a=h[i];
        for(auto s:strs)
        {
          if(s[i]==a) c++;
          else goto z;
        }
        if(c==n) ans=ans+a;
      }
      z:
      return ans;
    }
};