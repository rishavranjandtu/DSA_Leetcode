class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            heap.push({x.second,x.first});
            if(heap.size()>k)
            {
                heap.pop();
            }
        }
        vector<int> ans(k);
        while(heap.size()>0)
        {
            ans[--k]=heap.top().second;
            heap.pop();
        }
        return ans;
        
    }
};