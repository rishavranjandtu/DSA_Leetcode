class Solution {
public:
    bool isValid(string s) {
      stack<char>p;
      int n=s.size();
      for(int i=0;i<n;i++)
      {
        if(s[i]=='{'||s[i]=='('||s[i]=='[') p.push(s[i]);
        else
        {
          if(p.empty()) return false;
          char t=p.top();
          if(s[i]=='}'&&t=='{') p.pop();
          else if(s[i]==']'&&t=='[') p.pop();
          else if(s[i]==')'&&t=='(') p.pop();
          else return false;
        }
      }
       if(p.empty()==false) return false;
      return true;
    }
};