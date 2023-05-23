class Solution {
public:
    string reorganizeString(string s) {
      int n=s.size();
      map<char,int>m;
        for(auto x:s)
        {
          m[x]++;
        }
      string ans="";
      priority_queue<pair<int,char>>p;
      for(auto x:m)
      {
        p.push({x.second,x.first});
      }
      while(p.size()>1)
      {
        auto a=p.top();
        p.pop();
        auto b=p.top();
        p.pop();
        int f1=a.first; char d1=a.second;
        int f2=b.first; char d2=b.second;
        ans+=d1; f1--;
        ans+=d2; f2--;
        if(f1>0) p.push({f1,d1});
        if(f2>0) p.push({f2,d2});
      }
      
      if(p.size()==1)
      {
        if(p.top().first>1) return "";
        else return ans+p.top().second;
      }
        
        return ans;
        
      
    }
};