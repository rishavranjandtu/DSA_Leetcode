class Solution {
public:
  bool ispal(string s)
  {
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
      if(s[l]!=s[r]) return false;
      l++;
      r--;
    }
    return true;
  }
    vector<vector<string>>ans;
  void rec(string s, vector<string>&v)
  {
    if(s.size()==0)
    {
      ans.push_back(v);
      return;
    }
   
    
    for(int i=0;i<s.size();i++)
    {
      string pre=s.substr(0,i+1);
      string left=s.substr(i+1);
      if(ispal(pre))
      {
        v.push_back(pre);
        rec(left,v);
        v.pop_back();
      }
    }
  }
    vector<vector<string>> partition(string s) {
      vector<string>v;
      rec(s,v);
      return ans;
        
    }
};