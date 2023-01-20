class Solution {
public:
  void rec(int i, vector<int>&nums,set<vector<int>>&ans,vector<int>v, int n)
  {
    if(i==n) {ans.insert(v); return;}
    if(v.empty()) v.push_back(nums[i]);
    else if(nums[i]>=v.back()) v.push_back(nums[i]);
    rec(i+1,nums,ans,v,n);
    v.pop_back();
    rec(i+1,nums,ans,v,n);
  }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>ans;
      set<vector<int>>a;
      int n=nums.size();
      vector<int>v;
      rec(0,nums,a,v,n);
      for(auto x:a)
      {
        if(x.empty()==false&&x.size()>=2)
        ans.push_back(x);
      }
      return ans;
    }
};