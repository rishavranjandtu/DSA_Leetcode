class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
      int n=h.size();
      vector<int>ps;
      vector<int>ns;
      stack<int>s;
      s.push(0);
      ps.push_back(-1);
      for(int i=1;i<n;i++)
      {
        while(!s.empty()&&h[s.top()]>=h[i]) s.pop();
        if(s.empty()) ps.push_back(-1);
        else ps.push_back(s.top());
        
        s.push(i);
      }
      
      stack<int>v;
      v.push(n-1);
      ns.push_back(n);
      for(int i=n-2;i>=0;i--)
      {
         while(!v.empty()&&h[v.top()]>=h[i]) v.pop();
        if(v.empty()) ns.push_back(n);
        else ns.push_back(v.top());
        
        v.push(i);
      }
      reverse(ns.begin(),ns.end());
      int ans=0;
      for(int i=0;i<n;i++)
      {
        int curr=h[i];
        curr+=(i-ps[i]-1)*h[i];
        curr+=(ns[i]-i-1)*h[i];
        ans=max(ans,curr);
      }
      
      return ans;
    }
};