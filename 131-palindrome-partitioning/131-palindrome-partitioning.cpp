class Solution {
public:
    bool check(string s, int i)
    {
       int k=0;
        while(k<=i){
            if(s[k++]!=s[i--]) return false;
        }
        return true;
    }
    void palin(string s,vector<vector<string>>&ans,vector<string>&a)
    {
        if(s.size()==0)
        {
            ans.push_back(a);
            return ;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(check(s,i))
            {
                a.push_back(s.substr(0,i+1));
                string b=s.substr(i+1,s.size()-1-i);
                palin(b,ans,a);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> a;
        palin(s,ans,a);
        return ans;
    }
};