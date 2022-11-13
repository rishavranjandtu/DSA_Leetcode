class Solution {
public:
    string reverseWords(string s) {
      stack<string> v;
      string a="";
      for(int i=0;i<s.size();i++)
      {
        if(s[i]==' ') 
          {
            if(a!=""){v.push(a); a="";}
          }
        else a=a+s[i];
      }
      if(a!="")v.push(a);
      string c="";
      while(!v.empty())
      {
        if(v.size()!=1)c=c+v.top()+" ";
        else c=c+v.top();
        v.pop();
      }
      return c;
        
    }
};