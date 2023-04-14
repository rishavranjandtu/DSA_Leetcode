class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int l=0;
      int r=0;
      int n=nums.size();
      while(r<n)
      {
        if(nums[l]!=nums[r])
        {
          nums[++l]=nums[r];
        }
        r++;
      }
        return l+1;
    }
};