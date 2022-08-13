class Solution {
public:
    vector<string> stringtoword(string s)
    {
        vector<string> f;
        string word;
        
        stringstream v(s);
        while(v>>word)
        {
            f.push_back(word);
        }
        return f;
    }
    
    
    
    string reverseWords(string s) {
       vector<string> g= stringtoword(s);
        int n=g.size();
        string ans="";
        for(int i=n-1;i>=0;i--)
        {
            ans=ans+g[i];
           if(i!=0) ans=ans+" ";
        }
        return ans;
    }
};