class Solution {
public:
  vector<vector<int>>ans;
  
    void fun(int i,int n,vector<int>&c, int t,vector<int>&v)
    {
      if(t==0) {ans.push_back(v); return;}
      
      for(int j=i;j<n;j++)
      {
        if(j!=i&&c[j]==c[j-1]) continue;
        if(c[j]>t) break;
        
          v.push_back(c[j]);
          fun(j+1,n,c,t-c[j],v);
          v.pop_back();
        
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      sort(candidates.begin(),candidates.end());
      vector<int>v;
        int n=candidates.size();
      fun(0,n,candidates,target,v);
      return ans;
    }
};