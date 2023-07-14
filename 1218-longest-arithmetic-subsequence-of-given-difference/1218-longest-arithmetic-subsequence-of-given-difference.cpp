class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
      int n=arr.size();
      unordered_map<int,int>m;
      int ans=1;
      for(int i=0;i<n;i++)
      {
        if(m.count(arr[i]-d)!=0)
        {
          m[arr[i]]=1+m[arr[i]-d];
        }
        else
          m[arr[i]]=1;
      }
      for(auto x:m) ans=max(ans,x.second);
      return ans;
    }
};