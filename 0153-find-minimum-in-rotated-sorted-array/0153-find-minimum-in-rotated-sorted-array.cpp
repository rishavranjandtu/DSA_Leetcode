class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
      if(nums.size()==1) return nums[0];
      if(nums[0]<nums[n-1]) return nums[0];
      
      int l=0;
      int h=n-1;
      while(l<=h)
      {
        int m=(l+h)/2;
       if(nums[0]<=nums[m]) l=m+1;
        else h=m-1;
      }
      return nums[l];
    }
};