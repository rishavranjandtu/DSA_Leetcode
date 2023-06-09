class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
       int n=h.size();
        vector<int>l;
      vector<int>r;
       stack<int>s;
      for(int i=0;i<n;i++)
      {
        while(!s.empty()&&h[s.top()]>=h[i]) s.pop();
        if(s.empty()) l.push_back(-1);
        else l.push_back(s.top());
        s.push(i);
      }
      stack<int>ss;
      for(int i=n-1;i>=0;i--)
      {
        while(!ss.empty()&&h[ss.top()]>=h[i]) ss.pop();
        if(ss.empty()) r.push_back(n);
        else r.push_back(ss.top());
        ss.push(i);
      }
      reverse(r.begin(),r.end());
      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans=max(ans,(r[i]-l[i]-1)*h[i]);
      }
      return ans;
    }
};