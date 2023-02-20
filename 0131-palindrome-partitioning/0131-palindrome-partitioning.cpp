class Solution {
public:
  bool ispalindrome(string s)
  {
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
      if(s[l++]!=s[r--]) return false;
    }
    return true;
  }
  void fun(string s, vector<string>&v, vector<vector<string>>&ans)
  {
    if(s.size()==0)
    {
      ans.push_back(v);
      return;
    }
    string a="";
    for(int i=0;i<s.size();i++)
    {
      a=a+s[i];
      string l=s.substr(i+1);
      if(ispalindrome(a))
      {
        v.push_back(a);
        fun(l,v,ans);
        v.pop_back();
      }
    }
  }
    vector<vector<string>> partition(string s) {
        vector<string>v;
      vector<vector<string>>ans;
      fun(s,v,ans);
      return ans;
    }
};