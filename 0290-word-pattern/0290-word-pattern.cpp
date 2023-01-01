class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>w;
     
      stringstream ss(s);
      string f;
      while(ss>>f)
      {
        w.push_back(f);
        
      }
      set<char>x(p.begin(),p.end());
      set<string>y(w.begin(),w.end());
      if(x.size()!=y.size()) return false;
      unordered_map<char,string>m;
      if(w.size()!=p.size()||x.size()!=y.size()) return false;
      for(int i=0;i<w.size();i++)
      {
        if(m.find(p[i])==m.end())
        {
          m[p[i]]=w[i];
        }
        else if(m.find(p[i])!=m.end()&&m[p[i]]!=w[i]) return false;
      }
      return true;
    }
};