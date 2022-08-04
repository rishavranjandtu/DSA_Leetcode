class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(') v.push(s[i]);
            else
            {
                if(v.empty()) return false;
                  else if(s[i]=='}'&&v.top()=='{') v.pop();
                  else if(s[i]==']'&&v.top()=='[') v.pop();
                  else if (s[i]==')'&&v.top()=='(') v.pop();
                else v.push(s[i]);
            }
        }
        if(v.empty()) return true;
        return false;
    }
};