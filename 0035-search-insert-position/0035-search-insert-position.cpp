class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
      int n=nums.size();
      int l=0;
      int h=n-1;
      while(l<=h)
      {
        int mid=(l+h)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid]<t) l=mid+1;
        else h=mid-1;
      }
      return l;
        
    }
};