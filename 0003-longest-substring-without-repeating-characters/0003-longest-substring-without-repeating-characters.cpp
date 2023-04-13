class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
      int ans=0;
      for(int i=0;i<n;i++)
      {
        string a="";
        map<char,int>m;
        int c=0;
        for(int j=i;j<n;j++)
        {
          a+=s[j];
          m[s[j]]++;
          if(m[s[j]]>1) break;
          else c++;
        }
        ans=max(ans,c);
      }
      return ans;
        
    }
};