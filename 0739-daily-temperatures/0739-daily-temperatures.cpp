class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
      int n=t.size();
      stack<pair<int,int>>s;
      vector<int>ans(n,0);
      for(int i=n-1;i>=0;i--)
      {
        while(!s.empty()&&s.top().first<=t[i]) s.pop();
        ans[i]=s.empty()?0:s.top().second-i;
        s.push({t[i],i});
      }
      return ans;
        
    }
};