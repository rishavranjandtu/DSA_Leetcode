class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n=nums.size();
      set<vector<int>>s;
      sort(nums.begin(),nums.end());
      for(int i=0;i<n-2;i++)
      {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
          int sum=(nums[i]+nums[j]+nums[k]);
          if(sum==0) {s.insert({nums[i],nums[j],nums[k]}); j++; k--;}
          else if(sum>0) k--;
          else j++;
        }
      }
      vector<vector<int>>ans;
      for(auto x:s)
      {
        ans.push_back(x);
      }
      return ans;
        
    }
};