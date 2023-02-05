class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>m;
        int n=strs.size();
      for(auto x:strs)
      {
        int z=x.size();
        vector<int>v(26,0);
        for(int j=0;j<z;j++)
        {
          v[x[j]-'a']++;
        }
        m[v].push_back(x);
      }
      vector<vector<string>>ans;
      for(auto x:m)
      {
        vector<string>s;
        for(auto y:x.second)
        {
          s.push_back(y);
        }
        ans.push_back(s);
      }
      return ans;
    }
};