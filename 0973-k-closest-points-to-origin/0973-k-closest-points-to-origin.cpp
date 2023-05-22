class Solution {
public:
  double fun(int x, int y)
  {
    return sqrt(pow(x,2)+pow(y,2));
  }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<pair<double,pair<int,int>>>p;
      for(auto x:points)
      {
        double d=fun(x[0],x[1]);
        p.push({d,{x[0],x[1]}});
        if(p.size()>k) p.pop();
      }
      vector<vector<int>>ans;
      while(!p.empty())
      {
        auto f=p.top();
        int x=f.second.first;
        int y=f.second.second;
        p.pop();
        vector<int>v;
        v.push_back(x);
        v.push_back(y);
        ans.push_back(v);
      }
      return ans;
      
      
        
    }
};