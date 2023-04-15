class Solution {
public:
  vector<vector<int>>ans;
  void fun(int i, int n,vector<int>& c,int t, vector<int>&v)
  {
    if(i==n)
    {
      if(t==0) ans.push_back(v);
      return;
    }
    if(c[i]<=t) 
    {
      v.push_back(c[i]);
      fun(i,n,c,t-c[i],v);
      v.pop_back();
    }
    fun(i+1,n,c,t,v);
  }
    vector<vector<int>> combinationSum(vector<int>&candidates, int target) {
      vector<int>v;
      int n=candidates.size();
      fun(0,n,candidates,target,v);
      return ans;
        
    }
};