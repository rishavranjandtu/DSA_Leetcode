class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int sum=0;
      int ans=INT_MIN;
      for(auto x:nums)
      {
        sum=max(sum+x,x);
        ans=max(ans,sum);
      }
      return ans;
        
    }
};