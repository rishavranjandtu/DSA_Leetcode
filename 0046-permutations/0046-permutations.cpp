class Solution {
public:
  set<vector<int>>s;
  vector<vector<int>>ans;
  int n;
  void perm(int i, vector<int>&nums)
  {
    if(i==n)
    {
      s.insert(nums);
      return;
    }
    
    for(int j=i;j<n;j++)
    {
      swap(nums[i],nums[j]);
      perm(i+1,nums);
      swap(nums[i],nums[j]);
    }
  }
    vector<vector<int>> permute(vector<int>& nums) {
       n=nums.size();
      perm(0,nums);
      for(auto x:s)
      {
        ans.push_back(x);
      }
      return ans;
      
        
    }
}; 