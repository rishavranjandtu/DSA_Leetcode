class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>s;
      int n=t.size();
      vector<int>ans(n);
      int c=1;
      for(int i=n-1;i>=0;i--)
      {
        while(!s.empty()&&t[i]>=s.top().first)
        {
          s.pop();
        }
        if(s.empty()) ans[i]=0;
        else ans[i]=s.top().second-i;
        c=1;
        s.push({t[i],i});
      }
      return ans;
    }
};