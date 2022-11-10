class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>v;
        for(int i=0;i<s.size();i++)
        {
            bool t=false;
            while(v.empty()==false&&s[i]==v.top())
            {
                v.pop();
                t=true;
            }
           if(t==false) {v.push(s[i]);}
            else continue;
        }
        int n=v.size();
        string a="";
        while(!v.empty())
        {
            a.push_back(v.top()); v.pop();
        }
        reverse(a.begin(),a.end());
        return a;
        
    }
};