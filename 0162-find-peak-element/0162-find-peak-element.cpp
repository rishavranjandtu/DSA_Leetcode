class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int l=1;
      int h=nums.size()-2;
      int n=nums.size();
      if(n==1) return 0;
      if(n==2)
      {
        if(nums[0]>nums[1]) return 0;
        else return 1;
      }
      while(l<=h)
      {
        int m=(l+h)/2;
        if(nums[m-1]<nums[m]&&nums[m]>nums[m+1]) return m;
        else if(nums[m+1]>nums[m]) l=m+1;
        else if(nums[m-1]>=nums[m]) h=m-1;
      }
      if(nums[0]>nums[1]) return 0;
      if(nums[n-1]>nums[n-2]) return n-1;
      
      return -1;
    }
};