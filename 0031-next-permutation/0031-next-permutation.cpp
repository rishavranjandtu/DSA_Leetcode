class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n=nums.size();
      int b=-1;
      for(int i=n-1;i>0;i--)
      {
        if(nums[i-1]<nums[i]) {b=i-1; break;}
      }
      if(b==-1)
      {
        reverse(nums.begin(),nums.end());
        return;
      }
      else
      {
        for(int i=n-1;i>=0;i--)
        {
          if(nums[i]>nums[b])
          {
            swap(nums[i],nums[b]);
            break;
          }
        }
        reverse(nums.begin()+b+1,nums.end());
      }
        
    }
};