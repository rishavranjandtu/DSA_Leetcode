class Solution {
public:
    void f(int i,int n,set<vector<int>>&s,vector<int>&nums, vector<int>&a)
    {
        if(i>=n)
        {
            s.insert(a);
            return;
        }
        
        a.push_back(nums[i]);
        f(i+1,n,s,nums,a);
        a.pop_back();
        f(i+1,n,s,nums,a);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> a;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        f(0,n,s,nums,a);
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};