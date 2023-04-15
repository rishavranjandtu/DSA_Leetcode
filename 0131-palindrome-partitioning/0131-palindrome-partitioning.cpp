class Solution {
public:
  bool check(string s)
  {
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
      if(s[l++]!=s[r--]) return false;
    }
    return true;
  }
  vector<vector<string>>ans;
  void fun(int i, int n, string s, vector<string>&v)
  {
    if(i==n)
    {
      ans.push_back(v);
      return;
    }
      
    string a="";
    for(int j=i;j<n;j++)
    {
      a=s.substr(i,j-i+1);
      if(check(a)==true)
      {
        v.push_back(a);
        fun(j+1,n,s,v);
        v.pop_back();
      }
    }
  }
    vector<vector<string>> partition(string s) {
      int n=s.size();
      vector<string>v;
      fun(0,n,s,v);
        return ans;
    }
};