class Solution {
public:
    string smallestString(string s) {
      int n=s.size();
      int i=0;
      for( i=0;i<n;i++)
      {
        
        if(s[i]=='a') continue;
        else break;
      }
      
      if(i==n) 
      {s[n-1]='z'; return s;}
      
      for(int j=i;j<n;j++)
      {
        if(s[j]!='a') s[j]--;
        else break;
      }
      return s;
    }
};