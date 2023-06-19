class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
         vector<int>v(n+1,0);
        int ans=INT_MIN;
      
      for(int i=0;i<n;i++)
      {
        v[i+1]=v[i]+gain[i];
        ans=max(ans,v[i+1]);
      }
      return ans>=0?ans:0;
    }
};