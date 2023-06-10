class Solution {
public:
    string reverseWords(string s) {
      stack<string>ss;
      int n=s.size();
      
      string a="";
      
      for(int i=0;i<n;i++)
      {
        if(s[i]!=' ') a+=s[i];
        else
        {
          if(a!="")ss.push(a);
          a="";
        }
      }
      if(a!="") ss.push(a);
      
      string ans="";
      while(!ss.empty())
      {
        ans+=ss.top();
        ss.pop();
        if(ss.size()!=0)ans+=" ";
      }
      return ans;
        
    }
};