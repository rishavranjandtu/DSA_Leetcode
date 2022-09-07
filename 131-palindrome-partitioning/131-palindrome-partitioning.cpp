class Solution {
public:
    bool checkp(int i, int j, string s)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void perm(int ind, vector<vector<string>>&ans,vector<string>&v, string s)
    {
        if(ind==s.size())
        {
            ans.push_back(v);
            return;
        }
        
        
        for(int i=ind;i<s.size();i++)
        {
            if(checkp(ind,i,s))
            {
                v.push_back(s.substr(ind,i-ind+1));
                perm(i+1,ans,v,s);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        perm(0,ans,v,s);
        return ans;
    }
};