class Solution {
public:
    int evalRPN(vector<string>& t) {
      stack<long long>a;
      for(int i=0;i<t.size();i++)
      {
        if(t[i]=="+"||t[i]=="-"||t[i]=="/"||t[i]=="*")
        {
          long long c=a.top();
          a.pop();
          long long d=a.top();
          a.pop();
          if(t[i]=="+")
          {
            a.push(c+d);
          }
          else if(t[i]=="-")
          {
            a.push(d-c);
          }
          else if(t[i]=="*")
          {
            a.push(c*d);
          }
          else if(t[i]=="/")
          {
            a.push(d/c);
          }
        }
        else
        {
           a.push(stoi(t[i]));
        }
      }
        return a.top();
    }
};