class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int b=-1;
        int n=nums.size();
      for(int i=n-1;i>0;i--)
      {
        if(nums[i]>nums[i-1])
        {
          b=i-1;
          break;
        }
      }
      if(b!=-1)
      {
        for(int i=n-1;i>=0;i--)
        {
          if(nums[i]>nums[b])
          {
            swap(nums[i],nums[b]);
            reverse(nums.begin()+b+1,nums.end());
            break;
          }
        }
      }
      else
      {
        reverse(nums.begin(),nums.end());
      }
     // return nums;
    }
};