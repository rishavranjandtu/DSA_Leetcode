#include<vector>

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      vector<pair<int,int>>v;
      for(auto x:intervals)
      {
        v.push_back({x[0],x[1]});
      }
      int n=intervals.size();
      sort(v.begin(),v.end());
      int c=1;
      int l=v[0].second;
      for(int i=1;i<n;i++)
      {
        
        if(v[i].first<l)
        {
          l=min(l,v[i].second);
        }
        else
        {
          c++;
          l=v[i].second;
        }
      }
      return n-c;
        
    }
};