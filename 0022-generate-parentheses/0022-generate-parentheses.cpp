class Solution {
public:
  vector<string>ans;
  void helper(int o, int c, int n, string s)
  {
    if(s.size()==2*n)
    {
      ans.push_back(s);
      return ;
    }
    
    
    if(o<n) helper(o+1,c,n,s+"(");
    if(c<o) helper(o,c+1,n,s+")");
  }
    vector<string> generateParenthesis(int n) {
      helper(0,0,n,"");
      return ans;
        
    }
};