class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int>m;
      m['I']=1;
       m['V']=5;
       m['X']=10;
       m['L']=50;
       m['C']=100;
       m['D']=500;
       m['M']=1000;
      int ans=0;
      int n=s.size();
      ans+=m[s[0]];
      for(int i=1;i<n;i++)
      {
        ans+=m[s[i]];
        if((s[i]=='V'||s[i]=='X')&&s[i-1]=='I') ans-=2;
         if((s[i]=='L'||s[i]=='C')&&s[i-1]=='X') ans-=20;
         if((s[i]=='D'||s[i]=='M')&&s[i-1]=='C') ans-=200;
      }
      return ans;
      
        
    }
};