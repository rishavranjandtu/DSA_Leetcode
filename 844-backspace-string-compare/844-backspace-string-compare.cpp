class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> z;
        string a="";
        string b="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'&&!z.empty()) {z.pop(); }
            else if(s[i]!='#'){z.push(s[i]);}
        }
        while(!z.empty())
        {
            a=a+z.top();
            z.pop();
        } 
        for(int i=0;i<t.size();i++)
        {
           if(t[i]=='#'&&!z.empty()) {z.pop(); }
          else if(t[i]!='#'){z.push(t[i]);}
        }
        while(!z.empty())
        {
            b=b+z.top();
            z.pop();
        } 
        if(a==b) return true;
        return false;
        
    }
};