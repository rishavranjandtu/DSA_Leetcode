class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
      m['I']=1;
      m['V']=5;
      m['X']=10;
      m['L']=50;
      m['C']=100;
      m['D']=500;
      m['M']=1000;
     int ans=0;
      int n=s.size();
      for(int i=1;i<n;i++)
      {
        if(m[s[i-1]]<m[s[i]]) ans-=m[s[i-1]];
        else ans+=m[s[i-1]];
      }
      ans+=m[s[n-1]];
      return ans;
    }
};