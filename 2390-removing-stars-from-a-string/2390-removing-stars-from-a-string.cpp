class Solution {
public:
    string removeStars(string s) {
      stack<char>p;
      for(auto x:s)
      {
        if(x!='*') p.push(x);
        else p.pop();
      }
      string ans="";
      while(!p.empty())
      {
        ans.push_back(p.top());
        p.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
        
    }
};