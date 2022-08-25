class Solution {
public:
    bool check(string s, int st, int e)
    {
        while(st<=e)
        {
            if(s[st++]!=s[e--]) return false;
        }
        return true;
    }
    void palin(int ind, vector<vector<string>>&ans, vector<string>&a,string s)
    {
        if(ind==s.size())
        {
            ans.push_back(a);
            return ;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(check(s,ind,i))
            {
                a.push_back(s.substr(ind,i-ind+1));
                palin(i+1,ans,a,s);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> a;
        palin(0,ans,a,s);
        return ans;
    }
};