class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& ma, vector<int>& it) {
      unordered_map<int,vector<int>>m;
      
      for(int i=0;i<n;i++) m[ma[i]].push_back(i);
      
      queue<pair<int,int>>q;
      q.push({headID,0});
      int ans=0;
      while(!q.empty())
      {
        int nn=q.size();
        for(int j=0;j<nn;j++)
        {
          int p=q.front().first;
          int t=q.front().second;
          q.pop();
          int tt=t+it[p];
          ans=max(ans,tt);
          for(auto x:m[p]) q.push({x,tt});
        }
      }
      return ans;
        
    }
};