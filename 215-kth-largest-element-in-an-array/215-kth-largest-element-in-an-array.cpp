class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            q.push(nums[i]);
        }
        for(int i=k;i>1;i--)
        {
            q.pop();
        }
        return q.top();
    }
};