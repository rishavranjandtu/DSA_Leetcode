class Solution {
public:
    deque<int> q;
    vector<int> ans;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(!q.empty()&&i-q.front()>=k) q.pop_front();
            while(!q.empty()&&nums[q.back()]<nums[i]) q.pop_back();                
            q.push_back(i);
            if(i>=k-1) ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};