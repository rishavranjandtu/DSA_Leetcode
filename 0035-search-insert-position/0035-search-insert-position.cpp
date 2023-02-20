class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int s=0;
      int e=nums.size()-1;
      while(s<=e)
      {
        int mid=(s+e)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid]>t) e=mid-1;
        else s=mid+1;
      }
      return s;
    }
};