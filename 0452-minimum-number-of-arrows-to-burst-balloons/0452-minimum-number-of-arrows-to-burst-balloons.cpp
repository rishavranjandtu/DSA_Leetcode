class Solution {
public:
  
    int findMinArrowShots(vector<vector<int>>& p) {
      if (p.empty()) return 0;
        sort(p.begin(), p.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
        int n=p.size();
      int ans=1;
      int end=p[0][1];
      
      for(int i=1;i<n;i++)
      {
        if(p[i][0]<=end) continue;
        else
        {
          ans++;
          end=p[i][1];
        }
      }
      return ans;
    }
};