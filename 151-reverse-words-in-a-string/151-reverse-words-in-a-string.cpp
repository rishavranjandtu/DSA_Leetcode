class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string> v;
        int i=0;
        for(int i=0;i<n;i++)
        {
            string a;
            if(s[i]==' ') continue;
            while(i<n&&s[i]!=' ')
            {
                a=a+s[i];
                i++;
            }
             v.push(a);
        }
        string ans="";
        while(!v.empty())
        {
            
            ans=ans+v.top();
            v.pop();
            if(!v.empty()) ans=ans+ ' ';
        }
        return ans;
    }
};