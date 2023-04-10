class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
      int minn=INT_MAX;
      int ans=0;
      for(int i=0;i<n;i++)
      {
        minn=min(minn,nums[i]);
        if(nums[i]>minn) {ans+=nums[i]-minn; minn=nums[i];}
      }
      return ans;
    }
};