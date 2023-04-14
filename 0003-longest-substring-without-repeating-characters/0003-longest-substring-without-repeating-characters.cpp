class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
      int l=0;
      vector<int>v(256,-1);
      int ans=0;
      for(int i=0;i<n;i++)
      {
        
        if(v[s[i]]!=-1) l=max(l,v[s[i]]+1);
        v[s[i]]=i;
        ans=max(i-l+1,ans);
      }
        return ans;
    }
};