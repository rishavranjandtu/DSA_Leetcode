class Solution {
public:
     int fun(vector<int>&m)
     {
       return m[0]+m['e'-'a']+m['i'-'a']+m['o'-'a']+m['u'-'a'];
     }
    int maxVowels(string s, int k) {
      vector<int>m(26,0);
      int ans=INT_MIN;
      for(int i=0;i<k;i++)
      {
        m[s[i]-'a']++;
      }
      ans=max(ans,fun(m));
      int kk=0;
      for(int i=k;i<s.size();i++)
      {
        m[s[i]-'a']++;
        m[s[kk]-'a']--;
        kk++;
        ans=max(ans,fun(m));
      }
      return ans;
        
    }
};