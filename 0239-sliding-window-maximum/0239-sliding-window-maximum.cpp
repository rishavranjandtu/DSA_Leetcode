class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      int n=nums.size();
      vector<int>v;
      deque<int>d;
      int kk=0;
      for(int i=0;i<k;i++)
      {
        while(!d.empty()&&nums[d.back()]<nums[i]) d.pop_back();
        d.push_back(i);
      }
      v.push_back(nums[d.front()]);
      for(int i=k;i<n;i++)
      {
        if(nums[kk++]==nums[d.front()]) d.pop_front();
        while(!d.empty()&&nums[d.back()]<nums[i]) d.pop_back();
        d.push_back(i);
        v.push_back(nums[d.front()]);
      }
      return v;
    }
};