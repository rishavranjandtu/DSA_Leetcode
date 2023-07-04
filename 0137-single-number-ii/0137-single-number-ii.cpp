class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
      while(i<n)
      {
        if(i+3>=n) break;
        if(nums[i]!=nums[i+1]||nums[i+1]!=nums[i+2]) return nums[i];
        i=i+3;
      }
      return nums[i];
    }
};