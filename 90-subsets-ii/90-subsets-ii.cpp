class Solution {
public:
    void f(int i,vector<int>&nums, vector<int>&a,set<vector<int>>&s)
    {
        if(i==nums.size())
        {
            s.insert(a);
            return;
        }
        a.push_back(nums[i]);
        f(i+1,nums,a,s);
        a.pop_back();
        f(i+1,nums,a,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>>s;
        vector<int> a;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        f(0,nums,a,s);
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};