class Solution {
public:
  int pum(int n)
  {
    int ans=1;
    for(int i=1;i<=n;i++) ans*=i;
    return ans;
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     map<int,int>m;
      for(auto x:nums)
      {
        m[x]++;
      }
      int prd=1;
      for(auto x:m)
      {
        prd*=pum(x.second);
      }
      int n=pum(nums.size())/prd;
        vector<vector<int>>ans;
      for(int i=0;i<n;i++)
      {
        ans.push_back(nums);
        next_permutation(nums.begin(),nums.end());
      }
      return ans;
    }
};