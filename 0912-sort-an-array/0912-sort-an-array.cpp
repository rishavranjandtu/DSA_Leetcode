class Solution {
public:
  void merges(vector<int>&nums, int l, int mid, int h)
  {
    if(l>=h) return;
    int s=h-l+1;
    int k=0;
    vector<int>t(s,0);
    int i=l;
    int j=mid+1;
    while(i<=mid&&j<=h)
    {
      t[k++]=(nums[i]<nums[j]?nums[i++]:nums[j++]);
    }
    while(i<=mid)
    {
      t[k++]=(nums[i++]);
    }
    while(j<=h)
    {
      t[k++]=(nums[j++]);
    }
    for(int hh=0;hh<s;hh++)
    {
      nums[hh+l]=t[hh];
    }
  }
  void merge(vector<int>&nums, int l, int h)
  {
    if(l>=h) return;
    
    int mid=(l+h)/2;
    merge(nums,l,mid);
    merge(nums,mid+1,h);
    merges(nums,l,mid,h);
  }
    vector<int> sortArray(vector<int>& nums) {
        merge(nums,0,nums.size()-1);
      return nums;
    }
};