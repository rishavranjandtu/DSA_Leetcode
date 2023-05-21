class Solution {
public:
  bool check(string s)
  {
    int l=0;
    int h=s.size()-1;
    while(l<h)
    {
      if(s[l++]!=s[h--]) return false;
    }
    return true;
  }
  vector<vector<string>>ans;
  void fun(string s, int n,vector<string>&v)
  {
    if(n==0) {ans.push_back(v); return;}
    
    for(int j=1;j<=n;j++)
    {
    string a=s.substr(0,j);
    if(check(a))
    {
      v.push_back(a);
      fun(s.substr(j),n-j,v);
      v.pop_back();
    }
    }
  }
    
    vector<vector<string>> partition(string s) {
      int n=s.size();
      vector<string>v;
       fun(s,n,v);
      return ans;
    }
};