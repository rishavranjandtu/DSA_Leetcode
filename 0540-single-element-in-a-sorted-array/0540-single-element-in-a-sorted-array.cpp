class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int n=nums.size();
      int l=0;
      if(n==1) return nums[0];
      int h=n-1;
      while(l<=h)
      {
        int m=(l+h)/2;
        if(m%2==0)
        {
          if(nums[m]==nums[m+1]) l=m+1;
          else h=m-1;
        }
        else
        {
          if(nums[m]!=nums[m+1]) l=m+1;
          else h=m-1;
        }
      }
      return nums[l];
        
    }
};